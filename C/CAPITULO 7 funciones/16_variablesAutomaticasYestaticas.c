
/* 
    --En una variable estática, dicha variable tendrá el mismo valor cuando se haga la siguiente llamada
    --Una variable estática es inicializado una vez en todo el programa y no cada vez que la función sea llamada
    --En las variables staticas su valor por defecto es 0, diferente a las variables autmáticas donde no tienen valores iniciales por defecto
    --La desición de usar una variable estática o automática depende del uso destinado
    --Por ejemplo para contar el numero de veces que se ha llamado a una función se puede usar una variable local
*/

#include <stdio.h>

void automatic_static(void){
    auto int autoVar = 2;  //variables autmática por defecto
    static int staticVar = 1;   //variables estática

    printf("automatic = %i, static = %i\n", autoVar, staticVar);

    ++autoVar;
    ++staticVar;
}

int main(void){
    int x;
    void automatic_static(void);

    for(x = 0; x < 5; x++){
        automatic_static();
    }
}