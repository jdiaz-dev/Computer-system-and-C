
//inicializar un array y hacerlo correr en un bucle for

#include <stdio.h>

int main(void){
    int array[10];

    array[0] = 34;
    array[2] = 50;
    --array[2];
    array[3] = 50;
    array[5] = array[0] / 5;
    array[9] = 98;
    array[10] = 34;
    array[11] = 45;
    array[12] = 44;

    for(int x = 0; x < 15; x++){
        printf("array[%i] = %i\n", x, array[x]);
    }

}