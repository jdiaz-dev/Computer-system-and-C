/* ======================================= create thread by every client =========================================== */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>
#include <netinet/in.h>

#define PORT 8000
#define BUFFER_SIZE 4096
/* 
    * What are "socket levels"?
        In socket programming, socket levels refer to where in the OS networking stack a certain option or setting applies.

    * Common Socket Levels
    Level Constant	            Layer / Scope	                        Description
    SOL_SOCKET  	        Generic socket level	                Applies to socket itself (buffers, reuse, etc.)
    IPPROTO_IP  	        Internet Protocol (IPv4)	            IP-level options (e.g., TTL, multicast)
    IPPROTO_IPV6    	    Internet Protocol v6	                IPv6 options
    IPPROTO_TCP 	        Transmission Control Protocol	        TCP-specific options (e.g., TCP_NODELAY)
    IPPROTO_UDP 	        User Datagram Protocol	                UDP-specific options
    IPPROTO_RAW 	        Raw socket configuration	            Used with raw sockets
    SOL_TLS  (Linux only)	Transport Layer Security (TLS)	        Control kernel TLS sockets (kTLS)
*/

// Thread handler function
void* handle_client(void* arg) {
    int client_fd = *(int*)arg; //This expression retrieves the integer value from a pointer passed to a thread function like
    free(arg); // Free the malloc'd client_fd

    char buffer[BUFFER_SIZE] = {0};

    // Read HTTP request
    ssize_t bytes_read = read(client_fd, buffer, sizeof(buffer) - 1);
    if (bytes_read > 0) {
        printf("Received request??:\n%s\n", buffer);

        // Send fixed HTTP response
        const char* response =
            "HTTP/1.1 200 OK\r\n"
            "Content-Length: 12\r\n"
            "Content-Type: text/plain\r\n"
            "Connection: close\r\n"
            "\r\n"
            "Hello\n";

        write(client_fd, response, strlen(response));
    }

    close(client_fd);
    pthread_exit(NULL);
}

int main() {
    int server_fd;
    struct sockaddr_in address;
    int opt = 1;
    socklen_t addrlen = sizeof(address);

    // Create socket
    if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0) {
        perror("socket failed");
        exit(EXIT_FAILURE);
    }

    // Reuse address immediately after closing
    /* 
        SOL_SOCKET: specify socket level.
        SO_REUSEADDR: It tells the OS  “I want to allow this socket to bind to a port that’s in a TIME_WAIT state.”
    */
    setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt));

    // Bind to 0.0.0.0:8000
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(PORT);

    if (bind(server_fd, (struct sockaddr*)&address, sizeof(address)) < 0) {
        perror("bind failed");
        close(server_fd);
        exit(EXIT_FAILURE);
    }

    // Listen for connections
    if (listen(server_fd, 10) < 0) {
        perror("listen failed");
        close(server_fd);
        exit(EXIT_FAILURE);
    }

    printf("Listening on http://0.0.0.0:%d ...\n", PORT);

    while (1) {
        //allocating memory for each client_fd?
        int* client_fd = malloc(sizeof(int)); // Allocate memory for client_fd
        if (!client_fd) {
            perror("malloc failed");
            continue;
        }

        *client_fd = accept(server_fd, (struct sockaddr*)&address, &addrlen);
        if (*client_fd < 0) {
            perror("accept failed");
            free(client_fd);
            continue;
        }

        // Create thread to handle the client
        pthread_t tid; //stayed here
        if (pthread_create(&tid, NULL, handle_client, client_fd) != 0) {
            perror("pthread_create failed");
            close(*client_fd);
            free(client_fd);
        }

        pthread_detach(tid); // Automatically reclaim thread resources
    }

    close(server_fd);
    return 0;
}
// to compile: gcc basic_http_server_2.c -lpthread