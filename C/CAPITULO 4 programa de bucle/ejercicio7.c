/* revisando un punto decimal dentro de la funcion printf() */

#include <stdio.h>
int main (void)
{
    int dollars, cents, count;
    for ( count = 1; count <= 10; ++count ) {
        printf ("Enter dollars: ");
        scanf ("%i", &dollars);
        printf ("Enter cents: ");

        scanf ("%i", &cents);
        printf ("$%i.%.2i\n\n", dollars, cents);
        //la finalidad del primer punto "." es mostrar el punto
        //la finalidad del segundo punto "." es crear un punto decimal
    }
    return 0;
}
