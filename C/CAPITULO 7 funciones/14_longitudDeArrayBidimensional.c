
//usando las variables de la longitud del array
#include <stdio.h>

void scalarMultiply(int nRow, int nCol, int nums[nRow][nCol], int scalar){
    for(int x = 0; x < nRow; x++){
        for(int y = 0; y < nCol; y++){
            nums[x][y] *= scalar;
        }
        
    }
}
void displayMatrix(int nRow, int nCol, int nums[nRow][nCol]){
    for(int x = 0; x < nRow; x++){
        for(int y = 0; y < nCol; y++){
            printf("%4i ", nums[x][y]);
        }
        printf("\n");
    }
}
int main(void){
    // primero listamos # de filas y # de columnas para pasarselo como parámetro a el array
    void displayMatrix(int nRow, int nCol, int array[nRow][nCol]);
    void scalarMultiply(int nRow, int nCol, int array[nRow][nCol], int scalar);
    int nums[3][5] = {
        { 7, 16, 55, 13, 12 },
        { 12, 10, 52, 0, 7 },
        { -2, 1, 2, 4, 9 }
    };

    printf("Original matrix \n");
    displayMatrix(3, 5, nums);

    printf("\nMatrix multiplied by 2\n");
    scalarMultiply(3, 5, nums, 2);
    displayMatrix(3, 5, nums);

    printf("\nMatrix multiplied by -1\n");
    scalarMultiply(3, 5, nums, -1);
    displayMatrix(3, 5, nums);

}


