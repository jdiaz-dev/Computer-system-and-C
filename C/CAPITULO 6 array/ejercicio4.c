
//promedio de 10 numeros flotante

#include <stdio.h>

int main(void){
    float numbers[] = {
        [9] = 4.3,
        [8] = 5.3,
        [7] = 6.3,
        [6] = 2.3,
        [1] = 22.33,
        [2] = 5.3,
        [3] = 8.3,
        [4] = 10.3,
        [5] = 1.3,
        [0] = 100
        };
    float average = 0;

    for(int index = 0; index < 10; index++){
        average += numbers[index];
        
    }

    printf("Average of 10 float numbers: %0.3f", average);
}