
#include <stdio.h>

//cada vez que una función es llamada (recursiva o no) este establece su propio conjunto de variables locales y parámetros
unsigned long int factorial(unsigned int number){
    unsigned long int factorial(unsigned int number);

    if(number == 0) return 1;

    return number*factorial(number - 1);
}
int main(void){
    unsigned long int factorial(unsigned int n);
    int number = 5;
    unsigned long int result;

    for(unsigned int x = 0; x < 11; x++){
        result = factorial(x);
        printf("%2i! =  %i \n", x, result);
    }
        
}