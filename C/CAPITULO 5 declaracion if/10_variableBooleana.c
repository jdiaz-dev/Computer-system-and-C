
//programa que revisa si los numeros son primos

#include <stdio.h>

int main(void){

    _Bool primo;

    for(int x = 2; x <= 50; x++){
        primo = 1;

        for(int y = 2; y < x; y++){
            switch(x % y){
                case 0:
                    primo = 0;
            }
        }
        if(primo){  //la condicion es satisfecha es que el valor de primo no es cero
            printf("%i ", x);
        }
    }
}