#include <stdio.h>

int main(void)
{
    int num1 = 34;  
    //si int no es seguido por UL es ajustado como "int" de tamaño normal y tratado como un unsigned int, si es pequeño tambien es tratado como un "unsigned int"
    //si int no entra en un "int long", el complilador lo trata como un "unsigned long int"
    //si int no entra aqui el compilador lo trata como un "unsigned long int"
    //si int no entra aqui lo trta como "long long int"
    //y finalmente como un "unsigned long long int"

    /* cuando utilizamos:
        -long long int
        -long int
        -short int
        -unsigned int 
    podemos omitir la palabra int */

    unsigned num2 = 34; //por ello es equivalente a un int

    unsigned char num3 = 123;

    printf("Numero: %Li",num1);

    printf("es EQUIVALENTE a un INT: %i",num2);

    printf("numero POSITIVO CHAR: %hi",num3);

    return 0;
}