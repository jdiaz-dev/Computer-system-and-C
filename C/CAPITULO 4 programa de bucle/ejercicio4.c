/* factorial */

#include <stdio.h>

int main(void)
{
    int contador = 1,
        limite = 10,
        factorial = 1;

    printf("FACTORIALES DE LOS 10 PRIMEROS NUMEROS\n");
    printf(" n   factorial\n");
    printf("--- ------------\n");
    while(contador <= limite){
        factorial *= contador;
        printf("%2i   %i\n", contador, factorial);
        contador++;
    }
}