#include <stdio.h>

int main(void)
{
    int suma;   //declaramos la variable suma de tipo entero
                //C requiere que se declare todas las variables antes de usar en el program
                //esta instruccion es necesaria para generar la correcta instruccion para almacenar y recuperar valores dentro y fuera de la variable

    suma = 50 + 25; 

    //print() ahora tiene dos argumentos
    printf("La suma de 50 + 25 es:  %i\n",suma);  //suma es un argumento de printf()
    //% - especifica el tipo de valor que sera mostrado
    //i - especifica que un valor de tipo entero sera mostrado
    return 1;
}


