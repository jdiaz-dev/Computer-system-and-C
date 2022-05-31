#include <stdio.h>

int main(void)
{
    int n, numero, numeroTriangular;

    printf("¿Que numero triangular deseas calcular?");
    scanf("%i", &numero);    //scanf() - es como el prompt en JS,
                             //su primer parametro indica que tipo de valor va a leer la terminal
                             //el segundo parametro indica donde se almacenara ese valor ingresado

    numeroTriangular = 0;

    for(n=1; n <= numero; n++){
        numeroTriangular += n;
    }

    printf("El numero triangular %i es %i\n", numero, numeroTriangular);
}