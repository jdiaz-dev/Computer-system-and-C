#include <stdio.h>

int main(void)
{

    _Bool boleando = 1 == 1.0e0; 


    float x = 2.55;
    float polinomio = (3 * x * 1e-3) - (5 * x * 1e-2) + 6;   

    printf("El polinomio evaluado con x = 2.55 es igual a  : %f\n", polinomio);
    printf("Evaluar el boleano: %i\n", boleando);

    return polinomio;
}