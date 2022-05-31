
//numeros triangulares

#include <stdio.h>

//el nombre del parametro de la función es : "nombre formal del parámetro"
void calculateTriangularNumber(int n){
    //toda esta linea es llamado funcion prototype que el dice al compilador que calculateTriangularNumber() es una función que no retorna un valor (por la palabra "void")


    //las variables son creadas cada vez que la función es llamada y son locales a esta funcion
    int x, triangularNumber = 0;

    for(x = 1 ; x <= n; x++){
        triangularNumber += x;
    }

    printf("Triangular number is: %i \n", triangularNumber);
}

int main(void){
    calculateTriangularNumber(10);
    calculateTriangularNumber(20);
    calculateTriangularNumber(50);
}