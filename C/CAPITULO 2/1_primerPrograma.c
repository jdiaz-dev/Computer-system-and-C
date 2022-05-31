#include <stdio.h>  
//debe estar incluido al principio de cada programa, este narra la informacion al compliador acerca de printf(), tambien permite usar scanf()

int main(void)  //void especifica que main() no tien argumentos
//informa al sistema que el nombre del program es main(), y retorna un valor entero el cual es "int"
//main() es una palabra espeial que indica donde comenzara la execucion
//cuando abrimos los parentesis indicamos que es una funcion


/* 
    --to compile c program
        gcc file.c
    --to compile c program with custom name:
        gcc -o customName file.c  

    --other command
        gcc nameFile.c -o customName 

    -- to get all intermediate files
        gcc -Wall -save-temps filename.c –o filename 
 */


//todo el contenido dentro de las llaves( {} ) forma parte de main()
{
    printf("Programar es hiper divertido. \n");  
    printf("¿Que podre hacer con el lenguajes C \n ..1\n ..2\n ..3\n?"); 
    //print() -- es una libreria de C que muestra o imprime sus argumentos
    // \n -- es conocido como caracter de nueva linea,lo que significa ir a una nueva linea

    return 152215;
    //return 0 -- con esto finalizamos la ejecucion de main(), y retorna al sistema el valor de 0.
    //0 es usado por convecnion, podemos usar cualquier otro numero entero, asi inicamos que el programa a sido completado exitosamente
    //diferenes numeros pueden ser utilizados para indicar diferentes tipos de errores
}