
#include <stdio.h>

int main(void){
    int array[10] = {1,2,3,4,5,6,7,8,9,10};

    //inicalizamos el array sumando mas 5
    for(int x = 0; x < 10; x++){
        array[x] += 5;
    }

    for(int x = 0; x < 10; x++){
        printf("array[%i] = %i\n", x, array[x]);
    }
}