
//usaremos operador condicional dentro de un print

#include <stdio.h>

int main(void){
    int num1;

    printf("Ingresa un numero: ");
    scanf("%i", &num1);

    //podemos usar el operador condicional en cualquier lado
    printf(" resultado = %i", (num1 < 0) ? -1 : (num1 == 0) ? 0 : 1);
}