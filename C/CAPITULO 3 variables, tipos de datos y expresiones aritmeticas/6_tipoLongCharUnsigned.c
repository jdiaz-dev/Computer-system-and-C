#include <stdio.h>

int main(void)
{
    /* ======================LARGO========================= */
    long int enteroLargo = 131071100L;  
    //se puede poner L opcionalmente sin espacios para indicar que es de tipo largo

    long long int maxAllowedStorage;
    //es el maximo entero permitido

    long double US_deficit_2004;
    //maximo largo doble permitido

/* ======================CORTO========================= */
    short int numeroCorto = 1234;

/* =====================POSITIVO======================= */
    unsigned int positivoEntero = 12342134U;
    //se puede meter la "u" para indicar que es positivo

    unsigned int positivoEnteroLargo = 92342134UL; //constant ?
    //tambien se puede combinar "UL" para indicar que es un positivo largo  

    printf("numero ENTERO largo %li\n", enteroLargo);
    //para mostrar el valor de tipo largo usamos "l" antes de la "i"

    printf("esto es el MAXIMO ENTERO permitido: %lli\n", maxAllowedStorage);
    //en lugar de una una ele se utiliza dos eles para mostrar el long long

    printf("numero LARGO DOBLE permitido %Lg\n",US_deficit_2004);
    //"L" permite mostrar largo doble

    printf("numero CORTO ENTERO %hi\n", numeroCorto);
    //"h" permite ver un numero corto


    printf("numero ENTERO POSITIVO %i\n",positivoEntero);

    /* printf("numero LARGO FLOTANTE") */
    return 0;
}