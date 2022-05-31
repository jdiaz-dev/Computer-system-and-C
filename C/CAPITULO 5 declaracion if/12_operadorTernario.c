
//menejando el operador ternario

#include <stdio.h>
#include <stdbool.h>

int main(void){
    
    int num;

    printf("Ingresa un numero: ");
    scanf("%i", &num);

    int resultado = (num < 0) ? -1 : num*num;   //operador ternario
                                                // ":" es el operador de asignacion su precednecia es muy bajo junto con la coma

    printf("%i", resultado);

}