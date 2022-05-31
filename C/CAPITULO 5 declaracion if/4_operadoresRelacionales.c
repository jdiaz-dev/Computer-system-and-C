/* determinar año bisiesto */

#include <stdio.h>

int main(void)
{
    int year, resto_4, resto_100, resto_400;

    printf("Ingresa el year a probar: ");
    scanf("%i", &year);

    resto_4 = year % 4;
    resto_100 = year % 100;
    resto_400 = year % 400;
    
    if( (resto_4 == 0 && resto_100 != 0) || resto_400 == 0 ){
        printf("Este year SI es biciesto\n");
    }else{
        printf("Este year NO es biciesto\n");
    }
}