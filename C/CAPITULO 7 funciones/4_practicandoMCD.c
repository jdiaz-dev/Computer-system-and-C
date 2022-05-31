
#include <stdio.h>

void MCD(int x, int y){
    int resto;

    while( y > 0){
        resto = x % y;
        x = y;
        y = resto;
    }

    printf("El MCD es: %i \n", x);//x será el MCD
}

int main(void){
    MCD(150, 35);
    MCD(1026, 405);
    MCD(83, 240);

    return 0;
}