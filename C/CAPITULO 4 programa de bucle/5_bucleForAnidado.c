#include <stdio.h>

int main(void)
{
    int n, numero, numeroTriangular, contador;

    for(contador = 1; contador <= 5; ++contador){
        printf("Ingresa el numero triangular que quieres calcular");
        scanf("%i", &numero);

        numeroTriangular = 0;

        for(n = 1; n <= numero; ++n){
            numeroTriangular += n;
        }

        printf("El calculo del numero triangular %i es %i\n\n", numero, numeroTriangular);
        
        
    }

    return 0;
}

