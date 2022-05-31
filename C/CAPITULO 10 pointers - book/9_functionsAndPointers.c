#include <stdio.h>

int main (void){
void testChangeValueWithPointer (int *int_pointer); 
void testChangeValueOnlyWithVariable(int int_variable);
  int i = 50, *p = &i;

  printf ("Before the call to test i = %i\n", i);
  testChangeValueWithPointer (p);
  //testChangeValueOnlyWithVariable (i);
  printf ("After the call to test i = %i\n", i);
  return 0;
  }
void testChangeValueWithPointer (int *int_pointer) {//the value of the pointer into the formal parameter when the function is not called

  *int_pointer = 100; //although the pointer cannot be changed by the function, the data that the pointer references can be changed
}
void testChangeValueOnlyWithVariable(int int_variable){
  int_variable = 10;
}