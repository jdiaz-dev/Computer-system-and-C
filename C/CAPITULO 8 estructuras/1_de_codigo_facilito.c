/* 
    --una estructura es una colección de uno mas tipos de elementos denominados miembros
    --estos miembros pueden ser de un tipo de dato diferente
    --las estructuras son muy parecidas a los objetos
*/

#include <stdio.h>

//le damos nombre a las estructuraz
struct perro
{
    //aqui van los miembros de las estructuras
    char nombre[30];
    int edadMeses;
    float peso;

}
//definimos las variables de la estructuras
//esto vendría a ser la instancia de la estructura
perro1 = {"Chikorita", 10, 2.50},
perro2 = {"Hercules", 8, 8.40}; 

int main(void){
    printf("El peso de: %s es %.2f y tiene %i \n", perro1.nombre, perro1.peso, perro1.edadMeses);
    printf("El peso de: %s es %.2f y tiene %i \n", perro2.nombre, perro2.peso, perro2.edadMeses);
}