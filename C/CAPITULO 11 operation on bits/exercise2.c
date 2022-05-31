// SOLUTION FROM LINK

/* 
    - Write a program that determines whether your particular computer performs an arithmetic or a logical right shift.
 */

#include <stdio.h>
#include <stdbool.h>

/* functions */
bool isArithmeticRS(void);
bool isLogicalRS(void);

//Arithmetic right shift means shifting the bits to the right and MSB(most significant bit) is same as in the original number.
bool isArithmeticRS(void) 
{
	signed int w = 0x0;

	w >>= 1;

	if (w >= 0x0){
      printf("w= %i\n", w);
      return	false; /* 0 was pushed into MSB */
  }
		
	return true; /* 1 was pushed into MSB */
}

//Logical right shift means shifting the bits to the right and MSB(most significant bit) becomes 0.
bool isLogicalRS(void) 
{
	signed int w = 0x0;

	w >>= 1;
	return (w < 0x0) ? false : true;
}

int main(void)
{
	printf("Your computer performs %s right shift\n", isArithmeticRS() ? "an arithmetic" : "a logical");

	return 0;
}