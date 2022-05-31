
#include <stdio.h>

int main(void)
{
    int numero;
    printf("Ingresa un numero: ");
    scanf("%i", &numero);


    if(numero % 2 == 0){
        printf("El numero es PAR");

    }else{// el beneficio de "if-else" es redcuir la complejidad del programa y mejorar la legibilidad4

        printf("El numero es IMPAR");
    }
}