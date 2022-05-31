#include <stdio.h>

int main(void)
{
    double num1 = 12.7e4;

    //long long es el maximo positivo entero posible
    long long int number;

    printf("Numero de tipo double mostrando notacion cientifica %e\n", num1);
    //podemos expresar con los mismos caracteres del tipo float(%f, %e; %g)

    return 0;
}