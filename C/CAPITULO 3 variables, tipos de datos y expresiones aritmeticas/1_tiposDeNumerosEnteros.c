#include <stdio.h>
#include <limits.h>

int main(void)
{
    int num1, num2, num3;
    num1 = 0177; //en numero esta escrito en base 8, los valores deben de ser de 0-7. luego lo transformara a base 10 

    num2 = 0xFFEF0D;
    //0x50 -- si es precedido por un "0x" eñ valor sera expresado en hexadecimal    
    //para que se hexadecimal puede aceotar la "x" en minuscula o mayuscula
    //despues de la x puede ingresarse numeros del 1 al 9 y letras de (A-F), las letras representan valores del 10 al 15 respectivamente
    //el numero que se tiene almacenado en el numero dos se llama rgbColor
    

     


    printf("Muestra el numero en convertido a decimal: %i\n", num1);

    //octal
    printf("Muestra el numero con notacion OCTAL: %o\n", num1);

    printf("Numero con notacion OCTAL con un cero adelante: %#o\n", num1);

    //hexadecimal
    printf("Numero con notacion HEXADECIMAL: %x\n", num2);

    printf("Numero con notacion HEXADECIMAL con un cero adelante: %#x\n", num2);

    printf("Maxium INTEGER: %d\n", INT_MAX);

    printf("Minimun INTEGER: %d\n", INT_MIN);


    printf("Maxium LONG: %ld\n", LONG_MAX);
    return 0;
}