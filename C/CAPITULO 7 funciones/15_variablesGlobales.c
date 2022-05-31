
//conversion de un numero en base a otra base

#include <stdio.h>

//variables globales
//utilizarlas cuando muchas funciones utilizaran estas variables, esto evita que cada función tome el valor como parámetro
//aunque este enfoque reduce el numero de parámetros el precio a ser pagado es la generalidad de la función y en algunos casos reduce la legibilidad del programa

//todas las variables globales empizan con el valor cero por defecto
//podemos prefijar con la letra "g" para indicar que es global
int gNumber;
int gBase;
int gDigitsConvertedNumber[60];
long int convertedNumber;

int nextDigit;

//otro inconveniente de las variables globales es que  no se indidica los parámetros que se necesita como entrada para producir una salida
void getNumberAndBase(){
    printf("Enter number in base 10: ");
    scanf("%i", &gNumber);

    printf("\nEnter base to be converted: ");
    scanf("%i", &gBase);

    while(gBase < 2 || gBase > 16 ){
        printf("Bad base");
        scanf("%i", &gBase);
    }
}
void getconvertedNumber(){
    int remainder; //el valor de las variables locales no es por defecto cero, entonces deben ser explicitamente inicializada en el programa

    nextDigit = 0;
    while (gNumber >= gBase ){
        remainder = gNumber % gBase;
        gNumber = gNumber / gBase;
        gDigitsConvertedNumber[nextDigit] = remainder;
        nextDigit++;
    }
    gDigitsConvertedNumber[nextDigit] = gNumber;
}
void displayConvertedNumber(){
    const char baseDigits[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

    for(int x = nextDigit; x >= 0; x--){
        printf("%c", baseDigits[gDigitsConvertedNumber[x]] );
    }
    
}
int main(void){
    void getNumberAndBase(), getconvertedNumber(), displayConvertedNumber();

    getNumberAndBase();
    getconvertedNumber();
    displayConvertedNumber();
}