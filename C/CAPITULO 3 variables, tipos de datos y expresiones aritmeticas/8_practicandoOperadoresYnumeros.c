#include <stdio.h>

int main(void)
{
    int a = 25;
    int b = 2;

    float c =                25.0;
    float d = 2.0;

    printf("6 + a / 5 * b = %i\n",6 + a / 5 * b);   
    printf("a / b * b = %i\n", a / b * b);
    //la division de 2 int da un int, no se redondea si el resultado es decimal, solamente esos decimales se caen

    printf("c / d * d = %f\n", c / d *       d);
    printf("-a = %i\n", -a);
    // el signo (-) es un operador unario, recuerda que binario es por ejemplo el de tipo _boolean

    return 0;
}