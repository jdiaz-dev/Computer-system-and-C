
//imprimir numeros primos

#include <stdio.h>

int main(void){

    int numLimit = 50;
    _Bool esPrimo; 

    printf("=====NUMEROS PRIMOS=====\n");

    for(int num = 2; num <= numLimit; num++){

        if(num % 2 != 0 || num == 2){
            esPrimo = 1;

            for(int divisor = 2; divisor < num; divisor++){
                
                if(num % divisor == 0){
                    esPrimo = 0;
                }
                
            }

            if(esPrimo != 0){
                printf("%i ", num);
            }
        }
            
    }
}