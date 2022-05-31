#include <stdio.h>

int main(void)
{
     
    for( int j=0, h=0, l=0; j != 100; ++j, ++h, ++l ){
        //la variable j, h y l solamente es conocido solamente en el bucle for
        printf("%i, %i, %i\n",j, h, l);
    }
}