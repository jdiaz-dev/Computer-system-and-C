
//crearemos un else if con el el operador condicional

#include <stdio.h>

int main(void){
    int num1;

    printf("Ingresa un numero: ");
    scanf("%i", &num1);

                                    //se logra crear el efecto del ese if
                                    //esta agrupacion de elses son de derecha a izquierda
    int resultado = (num1 < 0) ? -1 : (num1 == 0) ? 0 : 1;
    printf("%i", resultado);
}