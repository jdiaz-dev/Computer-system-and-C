/* 
  **bitwise inclusive OR operator
    --if one bit is 1 or the another bit is 1 or both are 1, then the result of truth table is 1 
 */
#include <stdio.h>
int main (void)
{
  unsigned int word1 = 0431u, word2 = 0152u; // number in octal base

  printf ("%o ", word1 | word2); 

  word1 = word1 | 07; //in this case we are setting the 3 rightmost bits to 1 
  printf ("%o ", word1);
  return 0;
}

//page 332