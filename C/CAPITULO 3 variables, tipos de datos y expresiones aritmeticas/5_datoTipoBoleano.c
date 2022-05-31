#include <stdio.h>
#include <stdbool.h>//hace el trabajo mas facil en C, define los valores bool, true y false

int main(void)

{
    _Bool falso = 0;
    _Bool verdadero = 3; //cualquier valor que no sea 0 sera tomado como 1 o verdadero

    printf("El valor de tipo booleano solo acepta dos valores: %i y tambien %i\n", falso,verdadero );

    return 0;
}