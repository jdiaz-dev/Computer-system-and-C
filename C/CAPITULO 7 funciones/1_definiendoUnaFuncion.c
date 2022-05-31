
#include <stdio.h>

void printMessage(void){

    //las funciones printf() y scanf(), no tienen que ser escritas porque forman son parte de la librería estadar de C
    printf("Programming is fun.\n");
    scanf("");


    //return esta vacio por que no tiene un valor específico a retornar
    //return es opcional, la función se ejecuta de todas formas, pero sin retornar un valor
    return
}

//main indica al sistema C donde donde comienza la ejecución
//siempre se debe tener un método main()
//podemos tener el método main() al final del programa
int main(void){
    printMessage(); //ningun armento es pasado en la función
    
    //despues de la ejecución de printMessage(), la ejecución continúa en main()

    return 0;
}