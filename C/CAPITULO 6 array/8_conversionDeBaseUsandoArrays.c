
#include <stdio.h>

int main(void){
    //REOMENDACION : siempre dejar el programa lo mas pulcro posible
    long int number; //para que pueda convertir un numero largo
    int base;
    int convertedNumber[64], // 64 para que puede almacenar el numero entero mas largo posible en base 2
        index = 0;
    const char baseDigits[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'}; 
    char indexOfChar;

    printf("Number to be converted: ");
    scanf("%ld", &number);  // "%ld" para recoja el valor de con tipo long int

    printf("Base: ");
    scanf("%i", &base);  
    
    while(number != 0){
        convertedNumber[index] = number % base;
        number = number / base; //las divisiones se hace hasta que el numero sea 0 (ver en mi cuaderno de algoritmos)
        index++;
    }

    printf("Converted number = "); 
    for(int x = index - 1; x >= 0; x--){
        indexOfChar = convertedNumber[x];
        printf("%c", baseDigits[indexOfChar]);
    }

}