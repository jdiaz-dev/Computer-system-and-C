/* 
  --exits 2 way to call a funcion, calling by value and calling by reference
 */
//
#include <stdio.h>
void cubic(int *n); //n: using a pointer as argument
int main()
{
  int num = 3;
  printf("Original value  %i\n ", num);

  cubic(&num); //& : adding the reference
  printf("Modified value  %i\n ", num);

  return 0;
}
void cubic(int *n ){ //*n is name of argument

  *n = *n * *n * *n; //result : 27
  // *n : pointer n
}