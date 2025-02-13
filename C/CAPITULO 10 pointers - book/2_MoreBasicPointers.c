#include <stdio.h>

int main(void)
{
  char c = 'Q'; //the values must be initiazed before to assign to a pointer variable

  //indirect reference in action
  char *char_pointer = &c;

  printf("One %c %c\n", c, *char_pointer);

  c = '/';

  printf("Two %c %c\n", c, *char_pointer);

  /* 
    --we can change the value of a variable throght a variable that point itself
    --indirection operator in action?
   */
  *char_pointer = '('; //we are changing the variable that is pointed  by char_pointer, now c = '('
  printf("Three %c %c\n", c, *char_pointer); // *char_pointer, show the use of DEFERENCE OPERATOR

  return 0; 
}


/* 
DEFERENCE OPERATOR
  - The primary use of the dereference operator is to access the value at a given memory address.
 */