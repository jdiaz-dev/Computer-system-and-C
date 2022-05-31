#include <stdio.h>

int main(void){

    int n, numeroTriangular;

    numeroTriangular = 0;

    for( n=1; n <= 200; n += 1)
        numeroTriangular += n;
    
    printf("La suma del 200th numero triangular es: %i\n", numeroTriangular);

    return 0;
}