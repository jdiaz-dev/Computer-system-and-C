
#include <stdio.h>


//int indicará el tipo de valor a retornar
//si se omite el tipo a retornar el compilador de C asume que es un entero
int MCD(int num1, int num2){
    int remainder;

    while(remainder != 0){
        remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    }

    return num1;
}

int main(void){
    int result;

    result = MCD(150, 35);
    printf("The result is: %i \n", result);

    result = MCD(1026, 405);
    printf("The result is: %i \n", result);

                                //el valor será mostrado directamente en printf
    printf("The result is: %i \n", MCD(83, 240));
}