
#include <stdio.h>

int main(void)
{
    int numero;

    printf("Ingresa un numero:");
    scanf("%i", &numero);

    if(numero < 0){
        numero = -numero;   //si es negativo multiplicamos el numero por "-"
        
    }
    printf("El valor absoluto de %i es: ", numero);
}