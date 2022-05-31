#include <stdio.h>

#define concat(a, b) a##b // ## operator is used to join two tokens together
int main(void)
{
    int xy = 30;
    printf("%d", concat(10, 50));
    return 0;
}
