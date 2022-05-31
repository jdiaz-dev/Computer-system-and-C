#include <stdio.h>

int main(void)
{

    int x, y, residuo;

    printf("Ingresa dos numeros");
    scanf("%i %i,",&x, &y);

    //hallaremos el MCD con el algoritmo de Euclides
    while( y != 0){
        residuo = x % y;
        x = y;
        y = residuo;
    }

    printf("El MCD es: %i", x);

}