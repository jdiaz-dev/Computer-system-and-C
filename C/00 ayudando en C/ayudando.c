
#include <stdio.h>

int main(void){

    int numbers[3][3] = {
        {3,4,7},
        {32,44,17},
        {70,45,10},
    };

    int largest = numbers[0][0];   // I choose whatever number like largest

    //you use two for loop because the array of numbers are two-dimentional
    for(int x = 0; x < 3; x++){
        for(int y = 0; y < 3; y++){
            if(largest < numbers[x][y]){
                largest = numbers[x][y];
                
            }

        }
    }

    printf("%i ", largest);
}