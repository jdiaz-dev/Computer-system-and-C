#include <stdio.h>

int main(void){

    int numero, residuo;
    printf("Ingresa un numero.\n");
    scanf("%i", &numero);

    while (numero != 0){

        //el residuo sera el numero invertido
        residuo = numero % 10;
        printf("%i", residuo);
        numero = numero / 10;
    }
    printf("\n");

    return 0;

}

