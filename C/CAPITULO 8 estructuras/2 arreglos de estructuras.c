/* 
    --los arreglos de estructuras nos permiten almacenar dentro de un arreglo varias variables de estructuras
 */

#include <stdio.h>

struct perro
{
    char nombre[30];
    int edadMeses;
    float peso;
}
//haremos 2 isntancias de perro dentro de un array
perros[2];

int main(void){
    for(int i = 0; i < 2; i++){
        printf("%i Ingresa nombre del perro: ", i + 1);

        //ponemos "s" porque ahí ira una cadena de caracteres
        scanf("%s", &perros[i].nombre); 

        printf("%i Ingresa la edad del perro: ", i + 1);
        scanf("%i", &perros[i].edadMeses); 

        printf("%i Ingresa el peso del perro: ", i + 1);
        scanf("%f", &perros[i].peso); 
    }
    printf("\n");

    for(int i = 0; i < 2; i++){
        printf("%i El nombre del perro: %s \n", i + 1, perros[i].nombre);
        printf("%i La edad del perro es: %i \n", i + 1, perros[i].edadMeses);
        printf("%i El peso del perro es: %.2f \n", i + 1, perros[i].peso);
 
    }
}
