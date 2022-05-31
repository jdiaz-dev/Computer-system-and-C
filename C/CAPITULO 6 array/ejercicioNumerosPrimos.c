
#include <stdio.h>
#include <stdbool.h>

int main(void){
    int amoutOfNumbers;
    bool prime;

    printf("How many prime numbers you want to generate: ");
    scanf("%i", &amoutOfNumbers);

    for(int x = 2; x < amoutOfNumbers; x++){
        prime = true;
        for(int y = 2; y < x; y++ ){
            if(x % y == 0){
                prime = false;
            }
        }

        if(prime){
            printf("%i ", x);
        }
    }
}