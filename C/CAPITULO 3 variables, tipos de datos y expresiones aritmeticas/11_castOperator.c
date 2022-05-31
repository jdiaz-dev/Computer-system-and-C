#include <stdio.h>

int main(void)
{
    int resultado;
    resultado = (int) 29.55 + (int)21.99;
    //CAST OPERATOR: En este caso convierte a "i2" en punto flotante para fines de evaluacion de expresion, este no afecta a i2 permanenentemente
    //es un operador unario y tiene precedencia sobre otros operadores exepto sobre el operaodor unario mas y menos

    
    printf("El resultado con el cast operator es: %i\n", resultado);
    return 0;
}