#include <stdio.h>

int main(void)
{
    char unico1 = '0';
    char unico2 = ';';
    char unico3 = '\n'; 
    // la barra invertida es un caracter especial y C no lo contara como caracter, lo tratrara como un solo caracter no como dos, no lo contara como carater

    printf("Los caracteres de tipo CHAR solo tienen un caracter %c, %c y %c\n", unico1, unico2, unico3);

    return 0;
}