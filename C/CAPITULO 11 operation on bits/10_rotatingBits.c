#include <stdio.h>
int main (void)
{
  unsigned int w1 = 0xabcdef00u; //10101011 110011011110111100000000
  unsigned int w2 = 0xffff1122u;
  unsigned int rotate (unsigned int value, int n);

  //analizing the first example
  printf ("%x\n", rotate (w1, 8));
  /* printf ("%x\n", rotate (w1, -16));
  printf ("%x\n", rotate (w2, 4));
  printf ("%x\n", rotate (w2, -2));
  printf ("%x\n", rotate (w1, 0));
  printf ("%x\n", rotate (w1, 44)); */
  return 0;
}
// Function to rotate an unsigned int left or right
unsigned int rotate (unsigned int value, int n)
{
  printf("value decimal = %i\n", value);
  unsigned int result, bits;
  // scale down the shift count to a defined range
  if ( n > 0 ){
    n = n % 32;
    printf("n = %i\n", n);
  }
  else{
    n = -(-n % 32); //applying negation before to apply modulus operator, due that modulus opeator doesn't consider the sign 
    printf("n = %i\n", n);
  }

  if ( n == 0 ){
    result = value;
  }
  else if ( n > 0 ) { // left rotate
    bits = value >> (32 - n); 
    printf("bits = %i\n", bits); //10101011  : extracting bits throught left shift
    printf("right shift = %i\n", value << n); //11001101111011110000000000000000  : moving 8 bits to the right  
                                              
    result = value << n | bits;
  }
  else { // right rotate
    n = -n;
    bits = value << (32 - n);
    result = value >> n | bits;
  }
  printf("result = %i\n", result);
  return result; //110011011110111100000000  10101011 
                                          //the las 8 bits rotated
}