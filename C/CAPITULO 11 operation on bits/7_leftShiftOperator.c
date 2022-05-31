/* 
  --left shift : --the bits contained in a value will be shifted to the left
                 --some computers automatically multiply by power of two, because the shifting is faster than multiplication
 */
#include <stdio.h>

int main(void)
{
  int w1 = 03u;
  w1 = w1 << 1; // or w1 <<= 1
          //<< shift to the left
          //1: it is the number of bit positions to be shifted

  printf("1.  w1 = %o\n", w1);

  //shifting to the left 1 position of bits to the left
  printf("2.  w1 = %o\n", w1 << 1);

  //shifting to the left 2 position of bits to the left
  printf("2.  w1 = %o\n", w1 << 2);

  //shifting to the left 2 position of bits to the left
  printf("2.  w1 = %o\n", w1 << 3);

  return 0;
}


