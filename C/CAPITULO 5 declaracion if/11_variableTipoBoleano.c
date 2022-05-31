
//algoritmo que imprime todos los numeros primos

#include <stdio.h>

#include <stdbool.h>    //permitira incluir variables booleanas
                        //tienes mas fines esteticos porque hace mas facil de leer

int main(void){

    bool primo;

    for(int x = 2; x <= 50; x++){
        primo = true;
        for(int y = 2; y < x; y++){
            if(x % y == 0){
                primo = false;
            }
        }
        if(primo){
            printf("%i ", x);
        } 
    }
}