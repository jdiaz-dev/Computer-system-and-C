/* revisar que pasa si ingresamos un numero infinito */
#include <stdio.h>
int main (void)
{
    int number, right_digit;
    
    printf ("Enter your number.\n");
    scanf ("%i", &number);
    
    while ( number != 0 ) {//number en algun punto sera = 0 , porque se declaro como "int"
        right_digit = number % 10;
        printf ("%i", right_digit); //-5-4-3-2-1
        number = number / 10;

    }
    printf ("\n");
    return 0;
}