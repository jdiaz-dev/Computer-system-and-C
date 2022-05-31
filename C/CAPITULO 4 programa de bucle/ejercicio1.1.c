#include <stdio.h>

int main(void)
{
    int n = 1, numeroTriangular ;

    while(n <= 200){
        numeroTriangular += n;
        n++;
    }

    printf("%i", numeroTriangular); //20100
}