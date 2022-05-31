
#include <stdio.h>

int main(void){

    //un array de 4x20
    int M[4][5] = {
                    {10,5,-3,17,82},
                    {9,0,0,8,-7},
                    {32,20,1,0,14},
                    {0,0,8,7,6}
    };

    //el anterior array tambien puede ser inicializado de esta forma, quiere decir que las llaves internas no son obligatorias, son opcionales
    int N[4][5] = {10,5,-3,17,82,9,0,0,8,-7,32,20,1,0,14,0,0,8,7,6};


    //como con el array unidimensional, no es requerido que el array entero sea inicializado
    
    int O[4][5] = {
                    {10,5,-3},
                    {9,0,0},
                    {32,20,1},
                    {0,0,8}//en este caso las llaves internas son requeridas para hacer una correcta inicializacion
    };

    //los subindices tambien pueden ser uzados en la inicializacion del array
    int matriz[4][5] = { [0][0] = 1, [1][1] = 5, [2][2] = 9 };  //se esta inicializando tres elementos indicados de la matriz con valores especificos, los elementos no especificados son 0 por defecto
}