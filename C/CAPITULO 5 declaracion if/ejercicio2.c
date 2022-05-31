
//algoritmo que revisa si el primer numero es divisible entre el senguno

#include <stdio.h>

int main(void){
    int num1, num2;

    printf("Ingresa dos numeros: ");
    scanf("%i %i", &num1, &num2);

    switch(num1 % num2){
        case 0:
            printf("%i SI es divisible entre %i.",num1, num2);
            break;
        default:
            printf("La division no es posible.");
    }
}