/* suma de digitos de un numero: 2155 es 2 + 1 + 5 + 5 = 13 */

#include <stdio.h>

int main(void)
{
    int numero, residuo, sumaDeDigitos = 0;

    printf("Ingresa un numero: ");
    scanf("%i", &numero);

    while(numero != 0){
        residuo = numero % 10;
        sumaDeDigitos += residuo;
        numero /= 10;
    }

    printf("La suma es: %i", sumaDeDigitos);
}