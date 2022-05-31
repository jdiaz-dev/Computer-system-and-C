
//numeros primos donde uso  "variable-length arrays"

#include <stdio.h>
#include <stdbool.h>

int main(void){
   int totalNumbers;

    printf("How many prime numbers you want: ");
    scanf("%i", &totalNumbers);

   
    int primeNumbers[totalNumbers], amountPrimeNumbers = 0, x, y;
    bool prime;

    for( x = 2; x < totalNumbers; x++ ){
        prime = true;
        for( y = 2; y < x; y++){
            if(x % y == 0){
                prime = false;
            }
        }

        if(prime == true){
            primeNumbers[amountPrimeNumbers] = x;
            amountPrimeNumbers++;
        }
        
    }

    
    for(x = 0; x < amountPrimeNumbers; x++){
        printf("%i ", primeNumbers[x]);
    }

}