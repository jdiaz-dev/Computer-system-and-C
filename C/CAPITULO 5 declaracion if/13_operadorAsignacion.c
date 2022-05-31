
//asignar el mayor valor de dos numeros

#include <stdio.h>

int main(void){
    int num1;
    int num2;

    printf("Ingresa dos numeros: ");
    scanf("%i %i", &num1, &num2);

    int resultado = num1 > num2 ? num1 : num2;
    printf("%i", resultado);
}