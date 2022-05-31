
//practicando arrays y numeros primos

#include <stdio.h>
#include <stdbool.h>

int main(void){
    int primes[50], indexPrimes = 2;
    bool isPrime;

    primes[0] = 2;
    primes[1] = 3;

    for(int x = 5; x < 50; x += 2){
        isPrime = true;

        for(int y = 0; x / primes[y] >= primes[y]; y++){
            if(x % primes[y] == 0){
                isPrime = false;
            }
        }

        if(isPrime == true){
            primes[indexPrimes] = x;
            indexPrimes++;
        }
    }
    
    for(int z = 0; z < indexPrimes; z++){
        printf("%i ", primes[z]);
    }
}