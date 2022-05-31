#include <stdio.h>

int main(void)
{
    int a = 2;
    int b = 2;
    int c = 1;

    _Bool resultado = a >  b + c;

    printf("El resultado es: %i", resultado);
}