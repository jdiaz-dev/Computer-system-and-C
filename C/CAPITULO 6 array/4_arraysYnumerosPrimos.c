
//numeros primos con arrays

#include <stdio.h>
#include <stdbool.h>

int main(void){

    int y, primes[50], indexPrimes = 2;
    bool isPrime;
    int contador = 0;

    primes[0] = 2;
    primes[1] = 3;

                        //suma +2 para revisar solo los impares, ya que si es par no es primo
    for(int x = 5; x <= 50; x += 2){
        isPrime = true;

                            //revisa si la raiz de "x" no es mayor a un numero primo
        for(y = 0; isPrime && x / primes[y] >= primes[y]; y++){
            contador++;
            printf("%i \n", contador);
            if(x % primes[y] == 0){
                isPrime = false;
            }  
        }

        if(isPrime == true){
            primes[indexPrimes] = x;
            indexPrimes++;
            
        }
        
    }

    for(y = 0; y < indexPrimes; y++){
        printf("%i ", primes[y]);
    }
}