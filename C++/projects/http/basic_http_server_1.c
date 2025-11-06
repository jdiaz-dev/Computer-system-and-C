/* ============================================ basic http server ============================================== */
/* 
    STANDARD DIRECTORY:
        - /usr/include

        - /usr/include/x86_64-linux-gnu : This is an architecture-specific subdirectory of /usr/include.
*/

#include <stdio.h> // It provides functions for input and output operations, such as printf and scanf.
#include <stdlib.h> // It provides functions for memory allocation, process control, conversions, and other utilities.
#include <string.h> // It provides functions for manipulating C strings and memory blocks.
#include <unistd.h> // It provides access to the POSIX operating system API, including functions for file operations, process control, and more.
#include <netinet/in.h>
/* 
    * NETINET
        * it refers to a family of header files used for Internet protocols in low-level socket programming.
        
        * most commonly used headers in the <netinet> family include:
        - <netinet/in.h>	Defines constants and structures for Internet domain addresses (IPv4, IPv6), ports, etc.
        - <netinet/tcp.h>	Defines TCP-specific options (for setsockopt, etc.)
        - <netinet/ip.h>	Defines IP-level options (used for raw sockets, packet crafting)
*/

/* 
    * Difference between incomming connections and incoming requests:
        - incomming connections: Happens when a client (browser, curl, etc) opens a new TCP connection to your server:
        - incoming requests : Now that the connection exists, the client can send application data:
        - now that the connection exists, the client can realize a request:
*/

#define PORT 8000

/* 
    *What is a Socket?
        - A socket is an abstract endpoint for communication — it's like a doorway that allows one program to talk to another, either:
        ✅ on the same machine
        ✅ over a network (LAN, Internet)

*/
int main() {
    int server_fd, client_fd; //fd: refer  to file descriptors, which are integer handles used to identify open files or sockets in a program.
    struct sockaddr_in address;
    int addrlen = sizeof(address);

    // Create socket: IPv4, TCP
    if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0) {
        /* 
            ✅ AF_INET → IPv4 // AF: address family
            ✅ SOCK_STREAM → TCP // This tells the OS: "What type of communication will this socket do
            ✅ 0 → default protocol (TCP)
        */
        perror("socket failed");
        exit(EXIT_FAILURE);
    }

    // Bind to port 8000
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(PORT);
    /* 
        htons = "Host TO Network Short"
            - Converts a 16-bit integer from host byte order → network byte order.
            - Typically used for port numbers in sockets!
    */

    //The bind() system call assigns a specific IP address and port number to the server_fd socket
    if (bind(server_fd, (struct sockaddr*)&address, sizeof(address)) < 0) {
        perror("bind failed");
        close(server_fd);
        exit(EXIT_FAILURE);
    }

    // Listen
    /* 
            * Listen Concept:
            - Before listen():
            - server_fd is just a socket — not ready to accept connections.

            - After listen():
            - server_fd becomes a TCP server socket → OS will now accept incoming TCP connections on it.

            - When you call listen(), the kernel starts queueing incoming connections.
            - The queueing happens inside the Linux kernel — at the TCP stack level.
    */
    if (listen(server_fd, 10) < 0) {//10 : Tell OS to queue up to 10 incoming clients
        perror("listen failed");
        close(server_fd);
        exit(EXIT_FAILURE);
    }

    printf("Listening on http://0.0.0.0:%d ...\n", PORT);

    while (1) {
        // Accept incoming connection  from the queue.
        /* 
            After accept(), we can now:
                - read(client_fd, buffer, size);
                - write(client_fd, response, size);
                - close(client_fd);
        */
        if ((client_fd = accept(server_fd, (struct sockaddr*)&address, (socklen_t*)&addrlen)) < 0) {
            perror("accept failed");
            continue;
        }

        // Read request
        char buffer[4096] = {0};
        int valread = read(client_fd, buffer, sizeof(buffer)-1);
        printf("Received request:\n%s\n", buffer); // %s : allow to print chars as string

        // Prepare response
        const char *response =
            "HTTP/1.1 200 OK\r\n"
            "Content-Type: text/plain\r\n"
            "Content-Length: 12\r\n"
            "Connection: close\r\n"
            "\r\n"
            "HHHello Worldsito\n";

        // Send response
        write(client_fd, response, strlen(response));

        // Close connection
        printf("-----------clossing client connection\n");
        close(client_fd);
    }
    printf("-----------clossing server\n");
    close(server_fd);
    return 0;
}
