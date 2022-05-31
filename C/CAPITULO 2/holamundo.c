
#include <stdio.h>
//llamada a la libreria "studio.h", este tien algunas funciones integradas, por incorporar ese archivo en nuestro codigo, nosostros podemos usar todas las funciones directas de studio, lo cual significa que "tiene todas las funciones" para entradas y salidas de datos como leer valores del teclado e imprimimir resultados en la pantalla
int main(void)
//main() -- esta funcion es el punto de comienzo de el programa
//int -- es el valor de retorno de la funcion principal
//int main() -- regresara un valor entero del sistema operativo
{
    printf("\n Hola mundo con C");//printf esta incluida dentro de la librería de stdio y es usado para imprimir texto en panatalla
    //prinf es usado para enviar datos a la terminal

    //  \n es una secuencia de escape y representa una nueva linea de caracter
    return 0;
    
}
//{}--agrupa las declaraciones de la funcion main()
//gcc holamundo.c -o holamundo.exe --- inicia la compilacion y cambia el nombre del archivo a leer
//holamundo.exe -- para imprimir por consola

//a.exe es el ejecutable de este programa