
#include <stdio.h>


int main(void){
    void displayMatrix(int array[][5]);
    void scalarMultiply(int array[][5], int scalar);
    int nums[3][5] = {
        { 7, 16, 55, 13, 12 },
        { 12, 10, 52, 0, 7 },
        { -2, 1, 2, 4, 9 }
    };

    printf("Original matrix \n");
    displayMatrix(nums);

    printf("\nMatrix multiplied by 2\n");
    scalarMultiply(nums, 2);

    printf("\nMatrix multiplied by -1\n");
    scalarMultiply(nums, -1);

    printf("\nFinal matrix \n");
    displayMatrix(nums);

}
void scalarMultiply(int nums[][5], int scalar){
    for(int x = 0; x < 3; x++){
        for(int y = 0; y < 5; y++){
            printf("%4i ", nums[x][y] *= scalar);
        }
        printf("\n");
    }
}
void displayMatrix(int nums[][5]){
    for(int x = 0; x < 3; x++){
        for(int y = 0; y < 5; y++){
            printf("%4i ", nums[x][y]);
        }
        printf("\n");
    }
}

