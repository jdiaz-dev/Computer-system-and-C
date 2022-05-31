/* 
  right shift: --the bits contained in a value will be shifted to the right

    --never assume if the system implements a logical or arithmetic right shift operation 
    --Right shifting an unsigned value always results in 0s being shifted in on the left;
    --0s always will be shifed regadless the system
    --if the sign bit is 1, on some machines 1s are shifted in, and on others 0s are shifted in.
                      on some machines 1s are shifted in --->   arithmetic right shift
                      on others 0s are shifted in.       --->   logical right shift
 */

#include <stdio.h>

int main(void){

  //when we declare unsigned, we are ensuring that will be realized a "logical shift"
  unsigned int w1 = 0xF777EE22; //number represented of 32 bits
  int w2 = 0xF777EE22;

  printf("w1 loosed bits = %x\n", w1 >> 3); //we will lose 3 bits of low level

  printf("w1 = %x\n", w1 >> 1); //result = 7BBBF711  in 32 bits system
                                
  printf("w1 = %x\n", w2 >> 1); //results  = F777EE22 in other systeme (believe 64 bits)
  return 0;
}
