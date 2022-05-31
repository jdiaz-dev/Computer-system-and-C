
#include <stdio.h>

int main(void){
    int valores[10];    //reserva memoria para diez elementos

    valores[0] = 197;
    valores[2] = -100;
    valores[5] = -350;
    valores[9] = valores[5] / 10;
    --valores[2];

    for(int index = 0; index < 10; index++){
        printf("valores[%i] = %i\n", index, valores[index]);

    }

    //en la impresion del programa se ve que los valores que no he definido tiene valores sin sentido
    //la reomendacion es inicializar todas las variables del array

}