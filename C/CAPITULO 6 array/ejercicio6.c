
//los numeros de finobbaci sin usar array

#include <stdio.h>

int main(void){
    int num1 = 0, num2 = 1, fibonacciNumber;

    for(int x = 0; x < 14; x++){
        fibonacciNumber = num1 + num2;
        num1 = num2;
        num2 = fibonacciNumber;
        
        printf("%i ", fibonacciNumber);
    }
}