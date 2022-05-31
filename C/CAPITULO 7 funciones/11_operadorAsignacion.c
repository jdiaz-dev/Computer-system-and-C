
#include <stdio.h>

                //al recibir un array como parametro, este no es copiado dentro de los parámetros, mas bien se localiza la dirección de memoria del array pasado y las operaciones que se hagan en el permanecera en el array original
void multiplicyBy2(float array[], int numberOfElements){
                //lo que si es pegado como nueva variable a los parámetros son los valores comunes, mas no el array

    int i;
    for(i = 0; i < numberOfElements; i++){
        array[i] *= 2;  //los cambios se hara sobre el array que le llega por parámetro, el efecto permanecera desde donde se llamó a la función
    }
}

int main(void){
    float arrayValues[4] = {1.2, -3.7, 6.2, 8.55};
    int i;
    void multiplicyBy2(float array[], int nubmerOfElements);


    multiplicyBy2(arrayValues, 4);
    for(i = 0; i < 4; i++){
        printf("%.2f  ", arrayValues[i]);
    }

    return 0;
}