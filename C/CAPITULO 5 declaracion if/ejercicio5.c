
//numero invertido

#include <stdio.h>
int main(void){

    int number, digitoDerecho;

    printf("----------NUMERO INVERTIDO----------\n");
    printf("Ingresa el numero: ");
    scanf("%i", &number);

    while(number != 0){
        //importante  1 % 10 = 1 

        if(number < 0){
            number = -(number);
        }else{
            
            digitoDerecho = number % 10;
            printf("%i", digitoDerecho);
            number /= 10;

            if(number == 0){
                printf("-");
            }
        } 
    }
}