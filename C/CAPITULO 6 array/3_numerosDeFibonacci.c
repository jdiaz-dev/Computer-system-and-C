
//15 primeros numeros de Fibonaci

#include <stdio.h>

int main(void){

    int Fibonacci[15];

    Fibonacci[0] = 0; //por definicion
    Fibonacci[1] = 1; //por definicion

    for(int x = 2; x < 15; x++){
        Fibonacci[x] = Fibonacci[x - 2] + Fibonacci[x - 1];
    }

    printf("Los 15 primeros numeros de Fibonacci");
    for (int i = 0; i < 15; i++)
    {
        printf("%2i      %3i\n", i, Fibonacci[i]);
    }
    
}