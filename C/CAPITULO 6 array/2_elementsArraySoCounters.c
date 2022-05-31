
//encuesta de programa  de television

#include <stdio.h>

int main(void)
{
    int calificaciones[11], puntuacion;

    for(int index = 1; index <= 10; index++){
        calificaciones[index] = 0;
    }

    for(int x = 1; x <= 20; x++){
        printf("Ingresa calificacion: ");
        scanf("%i", &puntuacion);

        if(puntuacion < 1 || puntuacion > 10){
            printf("Puntuacion no valida: %i\n", puntuacion);
        }else{
            ++calificaciones[puntuacion];
        }
        
    }

    printf("Calificacion  Numero de respuestas\n");
    printf("------------  --------------------\n");
    for(int index = 1; index <= 10; index++){
        printf("%7i  %16i\n",index, calificaciones[index]);
    }
}