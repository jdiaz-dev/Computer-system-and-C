/* 
  **The bitwise Exclusive-OR operator, which is often called the XOR operator
    --if either bit is 1 then the result is 1, and if a both bits are equals the result is 0 

 */

#include <stdio.h>
void changeValuesWithoutExtraStorage(){
  int i1 = 5, i2 = 8;

  i1 ^= i2; //a kind of addition
  printf("checking i1 = %i , checking i2 = %i\n ", i1, i2);
  i2 ^= i1; //a kind of substraction
  printf("checking i1 = %i , checking i2 = %i\n ", i1, i2);
  i1 ^= i2; //a kind of substraction
  printf("checking i1 = %i , checking i2 = %i\n ", i1, i2);

  printf("i1 = %i\n", i1);
  printf("i2 = %i\n", i2);
}
int main (void)
{
  unsigned int word1 = 0536u, word2 = 0266u; // number in octal base

  printf ("%o \n", word1 ^ word2); 
  changeValuesWithoutExtraStorage();
  return 0;
}

