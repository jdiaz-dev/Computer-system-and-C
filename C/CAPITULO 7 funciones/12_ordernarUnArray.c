
#include <stdio.h>

void sort(int nums[], int amountNumbers){
    for(int x = 0; x < amountNumbers; x++){
        int minValue = nums[x];
        
        for(int y = x + 1; y < amountNumbers; y++){
            if(minValue > nums[y]){
                int temp = nums[x];
                nums[x] = nums[y];
                nums[y] = temp;
            }
        }
    }
}

int main(void){
    int numbers[6] = {4,3,0,20,17,11};
    int amountNumbers = 6;
    void sort(int nums[], int value);

    printf("Unsorted Array\n");
    //mostramos el array desordenado
    for(int i = 0; i < amountNumbers; i++){
        printf(" %i", numbers[i]);
    }
    
    sort(numbers,amountNumbers);

    printf("\n\n Sorted Array\n");
    //mostramos el array
    for(int i = 0; i < amountNumbers; i++){
        printf(" %i", numbers[i]);
    }

    return 0;
}