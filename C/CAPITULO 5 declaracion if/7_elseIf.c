
//programa que lee que clase de caracter se ha ingresado

#include <stdio.h>

int main(void)
{
    char caracter;

    printf("Ingresa un solo caracter: ");
    scanf("%c", &caracter);

    if ( (caracter >= 'a' && caracter <= 'z') || (caracter >= 'A' && caracter <= 'Z') ){
        printf("Es una letra");
    }else if(caracter >= '0' && caracter <= '9'){   //los numeros son tratados como letras
        printf("Es un numero");
    }else{
        printf("Es un caracter extrano");
    }
    
}