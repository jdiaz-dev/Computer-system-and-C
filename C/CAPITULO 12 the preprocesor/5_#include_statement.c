#include <stdio.h>
#include <stddef.h>
#include <math.h> //definitions for PI
#include <limits.h> //definitions for characters and integer
#include <float.h> //definitions for float
#include <string.h> //definitions for strings
#include "5_metric.h" //importing defitions from another file

int main (void)
{
  float liters, gallons;

  printf ("*** Liters to Gallons ***\n\n");
  printf ("Enter the number of liters: ");

  scanf ("%f", &liters);
  gallons = liters * QUARTS_PER_LITER / 4.0;
  printf ("%g liters = %g gallons\n", liters, gallons);

  printf("-------------my name %s\n", MY_NAME);
  printf("-------------my name %f\n", QUARTS_PER_LITER);
  return 0;
}