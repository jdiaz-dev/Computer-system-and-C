#include <stdio.h>

int main(void)
{
    int numero = 10,
        n = 1;

    printf("Cuadrado de los numeros del 1 al 10:\n\n");

    while (n <= numero){
        int cuadrado = n * n;
        printf("%2i   %3i\n", n, cuadrado);
        n++;
    }
    
}