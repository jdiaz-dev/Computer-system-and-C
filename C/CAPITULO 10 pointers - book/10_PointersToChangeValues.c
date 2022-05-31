#include <stdio.h>

int main(void){
  void exchange(int * const pointer_int1, int * const pointer_int2);

  int i1 = -5, i2 = 66, *p1 = &i1, *p2 = &i2;

  printf ("i1 = %i, i2 = %i\n", i1, i2);

  exchange (p1, p2);
  printf ("i1 = %i, i2 = %i\n", i1, i2);
  
  exchange (&i1, &i2);
  printf ("i1 = %i, i2 = %i\n", i1, i2);
  return 0;

}
void exchange(int * const pointer_int1, int * const pointer_int2){
  int temp; //temp serves only to hold the integer values
  int help = 555;
  
  //pointer_int1 = &help; //we cannot change the pointer assigned to pointer_int1
  
  temp = *pointer_int1;
  *pointer_int1 = *pointer_int2; //changing value, more not memory direction
  *pointer_int2 = temp; //changing value, more not memory direction
}


