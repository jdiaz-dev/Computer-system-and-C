
#include <stdio.h>

int main(void){
    int counters[5] = {0,0,0,0,0};
    int array[5] = {10,20,30,40,50};
    char letters[5] = {'a','b','c','d','e'};

    //el resto de elementos no inicializados comienza se llena con cero
    int numbers[10] = {1,2,3,4,5};

    //los elementos de puede ser inicializado en cualquier orden si lo hacemos dentro de las llaves
    float numbersFloat[10] = { [9] = 34.2, [8] = 45.5, [1] = 54.7};

    for(int x = 0; x < 10; x++){
        printf("%.2f   ", numbersFloat[x]);
    }
}