#include <stdio.h>

int main(void)
{
    int resultado = 100;
    resultado  /= 7 + 3;    // sumara primero, luego dividira y asignara en "resultado"
                            //todos los operadores tienen mayor precedencia que el operador asignacion, excepto la coma
    //las ventajas de este operador son: mas facil de escribir, de leer y el programa es mas rapido, porque el compilador lee menos codigo al evaluar la expresion

    printf("El resultado con el operador asignacion es: %i\n", resultado);
    return 0;
}