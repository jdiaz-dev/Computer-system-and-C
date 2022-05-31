
#include <stdio.h>

int minimum(int scores[5]){
    int minValue = scores[0], x;

    for(x = 0; x < 5; x++){
        if(scores[x] < minValue){
            minValue = scores[x];
        }
    }

    return minValue;
}

int main(void){
    int scores[5], x, minScore;

    //primero atrapamos el prototype, que dice al compilador que el que el valor de minimun()tomara un retornara un valor entero y recojera un array con cinco valores enteros
    //sim embargo esto no es necesario ya que minimun() fue declarado antes que de main(),
    //pero es mejor declarar todas las funciones que serán usadas dentro de la función
    int minimum(int values[5]);

    printf("Enter 10 scores\n");
    for(x = 0; x < 5; x++ ){
        scanf("%i", &scores[x]);
    }

    minScore = minimum(scores);

    printf("The minimum value is: %i", minScore);
}