#include <stdio.h>
int main(void)
{
    //declaracion de variables
    int num1, num2, resultado;

    //asignacion de valores y calcular su suma
    num1 = 50;
    num2 = 30;
    resultado = num1 + num2;
    printf("La suma de %i y %i es: %i\n", num2, num1, resultado);
    //%i muestra los valores en el orden que se le pase los parametros

    return 0;
}