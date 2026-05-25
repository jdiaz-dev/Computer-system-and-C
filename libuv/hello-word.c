#include <stdio.h>
#include <stdlib.h>
#include <uv.h>

int main() {
    uv_loop_t *loop = malloc(sizeof(uv_loop_t)); // uv_loop_t is a struct that holds all the event loop state 
    uv_loop_init(loop); // Initializes the loop struct — sets all internal fields to their default values

    printf("Now quitting.\n"); 
    uv_run(loop, UV_RUN_DEFAULT); // Starts the event loop — this is the heart of libuv
                                  // UV_RUN_DEFAULT runs the loop until there are no more active handles or requests

    uv_loop_close(loop); // Cleans up the loop — releases internal resources libuv allocated
                         // Must be called before free() otherwise you leak internal libuv resources
    free(loop); // Frees the heap memory you allocated with malloc
    return 0;
}