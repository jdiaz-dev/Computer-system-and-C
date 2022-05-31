
#include <stdio.h>

int main(void){

    //C permite definir un array sin un numero especifico de elementos
    //el tamaño del array es determinado automaticamente basado en el numero inicializado de elementos
    char characters[] = {'H','e','l','l','o','!'};
    for(int x = 0; x < 6; x++){
        printf("%c", characters[x]);
    }

    printf("\n");

    //en este caso la dimension del array sera determinado por el indice mas grande
    int numbers[] = {[33] = 33, [10] = 10, [49] = 49};
    for(int x = 0; x < 50; x++){
        printf("%i ", numbers[x]);
    }    
}