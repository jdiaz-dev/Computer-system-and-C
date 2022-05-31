#include <stdio.h>

int main(void)
{
  char c = 'X', d = 'Z';
  char * const charPointer1 = &c; //*charPointer is a constant pointer to the variable c
  
  //doesn't will work, no valid
  //charPointer1 = &d;

  const char * charpointer2 = &c; //location pointed by the charpointer2 not will change through the pointer variable 
  
  //doesn't will work, no valid
  //*charpointer2 = 'u';


  //const char * const *charPointer3 = &c; //doesn't work

  // c = 'L';

  printf("value %c", *charPointer1);

}

/* 
  --Pointers and Functions

*/
