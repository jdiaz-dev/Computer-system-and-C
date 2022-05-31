
//division entre dos numeros

#include <stdio.h>

int main(void){
    int num1, num2;

    printf("Ingresa dos numeros: ");
    scanf("%i %i", &num1, &num2);

    switch(num2){
        case 0:
            printf("No es posible la division por 0.");
            break;
        default:
            printf("%.3f", (float) num1 / num2);
    }
}