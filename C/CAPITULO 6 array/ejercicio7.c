
//algoritmo de Eratostenes para imprimir numeros primos
//criba de Eratostenes

#include <stdio.h>
#include <stdbool.h>

int main(void){
    
    size_t i, j;    //size_t es unsigned tipo entero, para asegurarnos que nunca sea negativo
    int numbers[151];
    const size_t n = 150;

    for(i = 2; i <= n; i++)
        numbers[i] = 0;


    i = 2;
    while(i < n){
        if(numbers[i] == 0){//si es cero es primo

            //los numeros se iran sumando y el que sume no sera primo, para ello le damos el valor de uno
            for(j = i * i; j <= n; j +=i ){
                numbers[j] = 1;
            }
        } 
        i++;
    }

    //imprimimos los primos
    for(i = 2; i <= n; i++){
        if( numbers[i] == 0){
            printf(" %i",i);
        }
    }
    printf("\n");
}