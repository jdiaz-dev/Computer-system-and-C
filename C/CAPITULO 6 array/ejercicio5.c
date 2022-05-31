
//que resultado esperarias del siguiente programa
//respuesta : 1,1,2,4,8,16,32,64,128,256
#include <stdio.h>

int main(void){
    int numbers[10] = {1,0,0,0,0,0,0,0,0,0};

    for(int x = 0; x < 10; x++){
        for(int y = 0; y < x; y++){
            numbers[x] += numbers[y];
        }
    }

    for(int z = 0; z < 10; z++){
        printf("%i ", numbers[z]);
    }
}