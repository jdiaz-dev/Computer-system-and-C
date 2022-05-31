#include <stdio.h>

int main(void)
{
    float f1 = 123.125, f2;
    int i1, i2 = -150;
    char c = 'a';

    i1 = f1;
    //flotante a entero
    printf("%f asignado a un ENTERO produce un %i\n ", f1, i1); //123


    f1 = i2;
    //entero a flotante
    printf("%i asignado a un FLOTANTE produce un %f\n", i2, f1); //-150.00000




    f1 = i2 / 100;  //primero hace la division como entero y el resultado es un entero que luego asignamos a un flotante

    //entero dividido por un entero
    printf("%i DIVIDIDO por 100 produce un %f\n", i2, f1);   //-1.0000000
    


    f2 = i2/100.0;  //la operacion de i2/100.00 es realizada como punto flotante(es decir en C cualquier operacion es realizada como punto flotante), que luego se le asigno a un punto flotante
    //entero dividido por un flotante
    printf("%i DIVIDIDO por 100.0 produce un %f\n", i2, f2);    //-1.5000


    f2 = (float) i2/100;
    //CAST OPERATOR: En este caso convierte a "i2" en punto flotante para fines de evaluacion de expresion, este no afecta a i2 permanenentemente
    //es un operador unario y tiene precedencia sobre otros operadores exepto sobre el operaodor unario mas y menos
    printf("(float) %i dividido por 100 produce un %f\n", i2, f2);   //-1.500000

    return 0;
}