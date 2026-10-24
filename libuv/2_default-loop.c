#include <stdio.h>
#include <uv.h>

int main() {
    uv_loop_t *loop = uv_default_loop(); // loop is being provided

    printf("Default loop.\n");
    uv_run(loop, UV_RUN_DEFAULT);

    uv_loop_close(loop);
    return 0;
}
// to compile linking with libuv: gcc h.c -o h -luv
//                                           h is a filename