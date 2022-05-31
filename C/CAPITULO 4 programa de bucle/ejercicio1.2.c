#include <stdio.h>

int main(void)
{
    int contador = 1,
        numero, 
        numeroTriangular;

    while(contador <= 5){
        printf("Que numero triangular tu quieres calcular\n");
        scanf("%i", &numero);

        numeroTriangular = 0;

        int n = 1;
        while(n <= numero){
            numeroTriangular += n;
            n++;
        }
        contador++;

        printf("La suma de %i es: %i\n", numero, numeroTriangular); 
    }

    
}