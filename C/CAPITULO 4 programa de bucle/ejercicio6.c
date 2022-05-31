/* revisando el ancho de la salida del printf */

#include <stdio.h>
int main (void)
{
    int n, triangularNumber;
    triangularNumber = 0;
    
    for ( n = 1; n <= 200; n = n + 1 ){
        triangularNumber = triangularNumber + n;
    }
        
    printf ("%-2i      %i\n", n, triangularNumber); //n = 201
    return 0;
}
