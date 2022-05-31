
#include <stdio.h>

int main(void)
{
    int amountScores,
        calificacion,
        totalCalificacion = 0,
        desaprobados = 0;
    
    float promedio = 0;

    printf("Cantidad de calificaciones tu ingresaras:");
    scanf("%i", &amountScores);

    for(int x = 1; x <= amountScores; ++x){
        printf("Nota:");
        scanf("%i", &calificacion);

        if(calificacion < 80){
            desaprobados++;
        }

        totalCalificacion += calificacion;
    }

    promedio = (float)totalCalificacion / amountScores; 
    //casteamos a totalCalificacion para evitar perdida de decimales
    //totalCalificacion es casteado antes que la division tome lugar

    printf("Tu promedio es: %.2f\n", promedio); //.2f -- modificador de presicion decimales
    printf("La cantidad de jalados es: %i", desaprobados);
}


