
#include <stdio.h>

int main(void){
    int amountFib;

    printf("How many Fibonacci numbers you want to print: ");
    scanf("%i", &amountFib);

    if(amountFib < 1 || amountFib > 75){
        printf("Are many numbers. Sorry!");
    }

    unsigned long int fibonacciNumbers[amountFib];  //esto es longitud de variable debido a que el valor la longitud del array no ha sido especificado y no es constante, pero no es considerado un buen estilo de programacion
    //esto tecnica es algo parecida a la "asignación dinamica de memoria", pero se trabajara en el CAP. 16

    fibonacciNumbers[0] = 0;
    fibonacciNumbers[1] = 1;

    for(int x = 2; x < amountFib; x++){
        fibonacciNumbers[x] = fibonacciNumbers[x - 2] + fibonacciNumbers[x - 1];
    }

    for(int x = 2; x < amountFib; x++){
        printf("%i ", fibonacciNumbers[x]);
    }

    //return 0 se hace por convenciaon al final del un programa
    return 0
}