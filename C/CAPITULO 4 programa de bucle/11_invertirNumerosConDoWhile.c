#include <stdio.h>

int main(void){

    int numero, residuo;

    printf("Ingresa un numero\n");
    scanf("%i", &numero);

    do{
        residuo = numero % 10;
        printf("%i", residuo);
        numero /= 10;
    }while(numero != 0);
  

}

