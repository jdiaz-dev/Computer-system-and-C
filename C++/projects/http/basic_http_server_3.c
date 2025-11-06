#define _GNU_SOURCE
#include <arpa/inet.h>
#include <errno.h>
#include <netinet/in.h>
#include <poll.h>
#include <pthread.h>
#include <signal.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <time.h>
#include <unistd.h>

#define PORT 8000
#define BACKLOG  1024
#define BUFFER_SIZE 8192
#define MAX_HEADER  4096
#define WORKERS 8
#define QUEUE_CAP 2048
#define READ_TIMEOUT_MS 5000

static int server_fd = -1;
static volatile sig_atomic_t running = 1;

/* ===================== util ===================== */
static void ignore_sigpipe(void) { signal(SIGPIPE, SIG_IGN); }

static ssize_t write_all(int fd, const void* buf, size_t len) {
    const char* p = buf;
    while (len) {
        ssize_t n = write(fd, p, len);
        if (n < 0) {
            if (errno == EINTR) continue;
            return -1;
        }
        p += n; len -= (size_t)n;
    }
    return 0;
}

static int poll_readable(int fd, int timeout_ms) {
    struct pollfd p = { .fd = fd, .events = POLLIN };
    for (;;) {
        int r = poll(&p, 1, timeout_ms);
        if (r < 0 && errno == EINTR) continue;
        return r; // 0 timeout, 1 ready, -1 error
    }
}

static void rfc1123_date(char* out, size_t cap) {
    time_t t = time(NULL);
    struct tm tm;
    gmtime_r(&t, &tm);
    strftime(out, cap, "%a, %d %b %Y %H:%M:%S GMT", &tm);
}

/* ===================== tiny queue ===================== */
typedef struct {
    int fds[QUEUE_CAP];
    size_t head, tail, size;
    pthread_mutex_t mu;
    pthread_cond_t cv_nonempty, cv_nonfull;
} fd_queue;

static void q_init(fd_queue* q) {
    *q = (fd_queue){0};
    pthread_mutex_init(&q->mu, NULL);
    pthread_cond_init(&q->cv_nonempty, NULL);
    pthread_cond_init(&q->cv_nonfull, NULL);
}

static void q_push(fd_queue* q, int fd) {
    pthread_mutex_lock(&q->mu);
    while (q->size == QUEUE_CAP) pthread_cond_wait(&q->cv_nonfull, &q->mu);
    q->fds[q->tail] = fd;
    q->tail = (q->tail + 1) % QUEUE_CAP;
    q->size++;
    pthread_cond_signal(&q->cv_nonempty);
    pthread_mutex_unlock(&q->mu);
}

static int q_pop(fd_queue* q) {
    pthread_mutex_lock(&q->mu);
    while (q->size == 0 && running) pthread_cond_wait(&q->cv_nonempty, &q->mu);
    int fd = -1;
    if (q->size) {
        fd = q->fds[q->head];
        q->head = (q->head + 1) % QUEUE_CAP;
        q->size--;
        pthread_cond_signal(&q->cv_nonfull);
    }
    pthread_mutex_unlock(&q->mu);
    return fd;
}

static fd_queue accept_q;

/* ===================== HTTP handling ===================== */
typedef struct {
    char method[16];
    char path[2048];
    int keep_alive; // 1 if Connection: keep-alive
} http_req;

static int parse_request(const char* buf, size_t len, http_req* out) {
    // Very small parser: request line + Connection header only
    // Expect: "GET / HTTP/1.1\r\n..."
    const char* end = memmem(buf, len, "\r\n\r\n", 4);
    if (!end) return 0; // need more
    size_t header_len = (size_t)(end - buf) + 4;
    if (header_len > MAX_HEADER) return -1; // header too large

    // request line
    const char* line_end = memmem(buf, header_len, "\r\n", 2);
    if (!line_end) return -1;
    char line[256];
    size_t l = (size_t)(line_end - buf);
    if (l >= sizeof(line)) return -1;
    memcpy(line, buf, l); line[l] = '\0';

    // method path version
    char version[16] = {0};
    if (sscanf(line, "%15s %2047s %15s", out->method, out->path, version) != 3) return -1;

    // Default: keep-alive for HTTP/1.1 unless Connection: close
    out->keep_alive = 1;

    // scan headers for "Connection:"
    const char* p = line_end + 2;
    while (p + 2 <= buf + header_len) {
        const char* nl = memmem(p, (buf + header_len) - p, "\r\n", 2);
        if (!nl) break;
        size_t hl = (size_t)(nl - p);
        if (hl == 0) break;
        if (hl < 12 && hl > 0) { p = nl + 2; continue; }
        if (strncasecmp(p, "Connection:", 11) == 0) {
            const char* v = p + 11;
            while (*v == ' ' || *v == '\t') v++;
            if (strncasecmp(v, "close", 5) == 0) out->keep_alive = 0;
        }
        p = nl + 2;
    }
    return (int)header_len; // bytes consumed
}

static int send_text_response(int fd, int keep_alive, int status, const char* reason, const char* body_fmt, ...) {
    char body[1024];
    va_list ap; va_start(ap, body_fmt);
    int blen = vsnprintf(body, sizeof(body), body_fmt, ap);
    va_end(ap);
    if (blen < 0) return -1;
    if (blen > (int)sizeof(body)) blen = (int)sizeof(body);

    char date[64]; rfc1123_date(date, sizeof(date));
    char hdr[1024];
    int hlen = snprintf(hdr, sizeof(hdr),
        "HTTP/1.1 %d %s\r\n"
        "Date: %s\r\n"
        "Server: tinyc/0.1\r\n"
        "Content-Type: text/plain; charset=utf-8\r\n"
        "Content-Length: %d\r\n"
        "Connection: %s\r\n"
        "\r\n",
        status, reason, date, blen, keep_alive ? "keep-alive" : "close");
    if (hlen < 0) return -1;

    if (write_all(fd, hdr, (size_t)hlen) < 0) return -1;
    if (write_all(fd, body, (size_t)blen) < 0) return -1;
    return 0;
}

static void handle_connection(int fd) {
    char buf[BUFFER_SIZE];
    size_t used = 0;

    for (;;) {
        // timeout for idle clients
        int r = poll_readable(fd, READ_TIMEOUT_MS);
        if (r <= 0) { /* timeout or error */ break; }

        ssize_t n = recv(fd, buf + used, sizeof(buf) - 1 - used, 0);
        if (n <= 0) break;
        used += (size_t)n; buf[used] = '\0';

        http_req req;
        int consumed = parse_request(buf, used, &req);
        if (consumed == 0) {
            if (used >= MAX_HEADER) { // header too big
                send_text_response(fd, 0, 431, "Request Header Fields Too Large", "header too large\n");
                break;
            }
            continue; // need more
        }
        if (consumed < 0) {
            send_text_response(fd, 0, 400, "Bad Request", "bad request\n");
            break;
        }

        // Very simple routing
        if (strcmp(req.method, "GET") == 0 && strcmp(req.path, "/") == 0) {
            send_text_response(fd, req.keep_alive, 200, "OK", "Hello kitty from tiny C server!\n");
        } else if (strcmp(req.method, "GET") == 0 && strcmp(req.path, "/health") == 0) {
            send_text_response(fd, req.keep_alive, 200, "OK", "ok\n");
        } else {
            send_text_response(fd, req.keep_alive, 404, "Not Found", "not found\n");
        }

        // remove consumed bytes; (no body handling in this minimal example)
        memmove(buf, buf + consumed, used - (size_t)consumed);
        used -= (size_t)consumed;

        if (!req.keep_alive) break;
    }
}

/* ===================== workers ===================== */
static void* worker_main(void* _arg) {
    (void)_arg;
    for (;;) {
        int fd = q_pop(&accept_q);
        if (fd < 0) {
            if (!running) break;
            continue;
        }
        handle_connection(fd);
        close(fd);
    }
    return NULL;
}

/* ===================== signals ===================== */
static void on_sigint(int sig) {
    (void)sig;
    running = 0;
    if (server_fd >= 0) close(server_fd);
}

/* ===================== main ===================== */
int main(void) {
    ignore_sigpipe();
    signal(SIGINT, on_sigint);

    server_fd = socket(AF_INET, SOCK_STREAM, 0);
    if (server_fd < 0) { perror("socket"); exit(1); }

    int opt = 1;
    setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt));
#ifdef SO_REUSEPORT
    setsockopt(server_fd, SOL_SOCKET, SO_REUSEPORT, &opt, sizeof(opt));
#endif

    struct sockaddr_in addr = {0};
    addr.sin_family = AF_INET;
    addr.sin_addr.s_addr = htonl(INADDR_ANY);
    addr.sin_port = htons(PORT);

    if (bind(server_fd, (struct sockaddr*)&addr, sizeof(addr)) < 0) {
        perror("bind"); close(server_fd); return 1;
    }
    if (listen(server_fd, BACKLOG) < 0) {
        perror("listen"); close(server_fd); return 1;
    }

    printf("Listening on http://0.0.0.0:%d ...\n", PORT);

    q_init(&accept_q);

    pthread_t th[WORKERS];
    for (int i = 0; i < WORKERS; ++i) pthread_create(&th[i], NULL, worker_main, NULL);

    while (running) {
        struct sockaddr_in caddr; socklen_t clen = sizeof(caddr);
        int fd = accept(server_fd, (struct sockaddr*)&caddr, &clen);
        if (fd < 0) {
            if (errno == EINTR) break;
            perror("accept"); continue;
        }
        q_push(&accept_q, fd);
    }

    // shutdown: wake workers
    running = 0;
    pthread_mutex_lock(&accept_q.mu);
    pthread_cond_broadcast(&accept_q.cv_nonempty);
    pthread_mutex_unlock(&accept_q.mu);

    for (int i = 0; i < WORKERS; ++i) pthread_join(th[i], NULL);
    return 0;
}
//to compile: gcc http_server.c -O2 -Wall -Wextra -pthread
