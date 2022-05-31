#include <stdio.h>

int main(void)
{
    int j = 0;

    //se puede omitir campos si no necesitas que una expresion inicial sea evaluada
    //si el campo de la condicion es omitido, el bucle for se volvera infinito
    for( ; j != 100; ++j ){
        printf("%i\n",j);
    }
}