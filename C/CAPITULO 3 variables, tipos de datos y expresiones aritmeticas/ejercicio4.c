#include <stdio.h>

int main(void)
{
    float gradosFahrenheit = 150;
    float gradosCelsius = (gradosFahrenheit - 32) / 1.8;

    printf("Grados Fahrenheit en Celsius es: %g\n", gradosCelsius);

    return gradosCelsius;
}