#include <stdio.h>
int arraySum (int *array, const int n)
{
  int sum = 0;
  int * const arrayEnd = array + n;

  //we void use another variable to use it as iterator, instead we will use only de pointer
  for ( ; array < arrayEnd; ++array ) //increment operator do not affect to values of array
  sum += *array;
  return sum;
}
int main (void)
{
  int arraySum (int *array, const int n); //int *array : declaring as formal parameter a pointer instead of an array

  int values[10] = { 3, 7, -9, 3, 6, -1, 7, 9, 1, -5 };
  printf ("The sum is %i\n", arraySum (values, 10));
  return 0;
}
/* 
  ********* Is It an Array or Is It a Pointer? *********
  --pointers and arrays are intimately related in C
 */

/* 
  --page 313
  --Pointers to Character Strings


 */
