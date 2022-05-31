/* 
  **The bitwise Exclusive-OR operator, which is often called the XOR operator
    --The ones complement operator is a unary operator, and its effect is to simply“flip” the bits of its operand
    --it is useful when we don't know the precise bit size of the cuantity whe we work with a operation. It makes our program more portable
 */

#include <stdio.h>

int main (void)
{
  unsigned int w1 = 1;
  // w1 = ~w1;
  printf("w1 = %i\n", ~w1);

  //w1 &= 0xFFFFFFFE; //to convert w1 to 0
  printf("w1 = %i \n", w1);

  w1 &= ~1; //we can replace the previous statement with this to convert w1 to 0
  printf("w1 = %i\n", w1);//to calculate complement of 1 we need full the leftmost bits of a integer (31 leftmost bits on a system of 32 bits)
  return 0;
}
