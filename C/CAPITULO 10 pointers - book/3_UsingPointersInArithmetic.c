#include <stdio.h>

int main(void)
{
  int i1, i2;
  int *p1, *p2;

  i1 = 5;
  p1 = &i1;

  //* : a pointer reference operator has higher precedence than aritmetic operator even of & operator
  i2 = *p1 / 2 + 10; //we can use value of pointer as arithmetic expression 
  p2 = p1; //the value of pointer p1 is assigned to p2 pointer, therefore p2 point to the variable that point p1, now we have two pointers pointing to the same item (i1)
  printf ("i1 = %i, i2 = %i, *p1 = %i, *p2 = %i\n", i1, i2, *p1, *p2);
  printf ("memory address  %i\n", p1);
  return 0;

}

