
//mi solución al Método Rapshon Newton para hallar la raiz cuadrada
#include <stdio.h>

//devuelve el valor absoluto
float absoluteValue(float result){
    
    if(result < 0){
        result = -result;
    }
    return result;
}

float findSquareRoot(int number){
    int guess = 1, counter = 0;
    const float epsilon = 0.0001;
    float temp; 

    //advertimos sobre un numero negativo
    if(number < 0){
        printf("Negative argument is not allow\n");
        return -1.0;
    }

    //la iteracion se hace usando el método Raphson Newton
    while(absoluteValue(guess*guess - number) >= epsilon){
        temp = number / guess;
        guess = (guess + temp) / 2;
        counter++;
        printf("%i ", counter);
    }

    return guess;
}

float main(void){
    float result = findSquareRoot(169);

    printf("The square root: %f", result);
}




