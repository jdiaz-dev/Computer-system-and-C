
//revisar si es menor, igual o mayor a cero

#include <stdio.h>

int main(void)
{
    int numero, signo;

    printf("Ingresa un numero: ");
    scanf("%i", &numero);

    if(numero < 0 ){
        printf(" -1");
    }else if(numero == 0){
        printf("0");
    }else{
        printf(" +1");
    }

}