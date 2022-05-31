//n(n+1)/2
#include <stdio.h>

int main(void)
{
    int n = 5,
        limite = 50,
        numeroTriangular;

    printf("Tabla de numeros triangulares de 5 en 5:\n");

    while(n <= limite){
        numeroTriangular = n * (n + 1) / 2;
        printf("%3i  %4i\n", n, numeroTriangular);
        n += 5;
    }
}