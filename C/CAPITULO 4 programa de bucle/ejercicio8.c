// modificar el programa 4.5 del libro para el usuario pueda ingresar el numero triangular que quiere calcular

#include <stdio.h>

int main(void)
{
    int contador, numero, numeroTriangular;

    printf("Ingresa la cantidad de veces a calcular el numero triangular: ");
    scanf("%i",&contador);

    for(int n = 1; n <= contador; ++n){
        printf("Ingresa tu numero %i :", n);
        scanf("%i", &numero);

        numeroTriangular = 0;
        for(int p = 1; p <= numero; ++p){
            numeroTriangular += p;
        }

        printf("El numero %i es: %i\n", contador, numeroTriangular);
    }
}