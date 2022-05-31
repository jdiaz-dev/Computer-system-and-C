

#include <stdio.h>
        //podemos omitir la cantidad de elementos que contendra el array, asi la funcion sera mas general
int minimum(int scores[], int numberOfElements){
    int minValue = scores[0], x;

    for(x = 0; x < numberOfElements; x++){
        if(scores[x] < minValue){
            minValue = scores[x];
        }
    }

    return minValue;
}

int main(void){
    int array1[5] = {20,303,5,-4,40};
    int array2[7] = {200,303,700,345,409,233,100};  
    int minimum(int values[], int numberOfElements);

    printf("The array 1 minimum value is: %i\n", minimum(array1, 5));
    printf("The array 1 minimum value is: %i\n", minimum(array2, 7));
}