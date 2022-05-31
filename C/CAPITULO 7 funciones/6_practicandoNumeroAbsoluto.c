
#include <stdio.h>

//int indicará el tipo de valor a retornar
//si se omite el tipo a retornar el compilador de C asume que es un entero
float absoluteNumber(float number){
    if(number < 0){
        number = -number;
    }

    return number;
}

int main(void){
    int num2 = -34;
    float result;


    result = absoluteNumber(-150);
    printf("The result is: %.1f \n", result);

                        //el vlaor de num2 será convertido a float cuando llegue a la función absoluteNumber()
    result = absoluteNumber(  num2);
    printf("The result is: %.1f \n", result);
}