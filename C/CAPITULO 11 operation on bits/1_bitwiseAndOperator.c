/* 
  **bitwise AND operator
    --if one bit is 1 and the another bit is 1, then the result  of truth table is 1 
 */
#include <stdio.h>
int main (void)
{
  unsigned int word1 = 077u, word2 = 0150u, word3 = 0210u; // number in octal base

  printf ("%o ", word1 & word2); // C use truth table to use bitwise AND operator
  printf ("%o ", word1 & word1);
  printf ("%o ", word1 & word2 & word3); //the operation with 3 numbers starts from left to right
  printf ("%o\n", word1 & 1); //it is a way to check if the number is odd or even
                              //if the rightmost bit is 1, it is odd
                              //if the rightmost bit is 0, it is even
  return 0;
}

//page 331