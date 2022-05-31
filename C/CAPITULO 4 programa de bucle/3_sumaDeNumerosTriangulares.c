#include <stdio.h>

int main(void)
{
    int n, numerosTriangulares;

    printf("TABLA DE NUMERO TRIANGULARES \n\n");
    printf(" n    suma del 1 a n\n");
    printf("---   -------------- \n");

    numerosTriangulares = 0;

    for(n=1; n <= +10; ++n){     //se puede escribir asi el incremento en C
        numerosTriangulares += n;
        printf(" %2i   %i\n", n, numerosTriangulares);// "%2i" resultado justificacion a la derecha
                                                      //garantiza que utilizara dos columnas para mostrar la salida del resultado
    }
}