/*
 * 4. Using the result obtained in exercise 3, modify the rotate() function
 * from Program 11.4 so that it no longer makes any assumptions about the size
 * of an int.
 *
 * By Faisal Saadatmand 
 */
#include <stdio.h>
int main (void)
{
	unsigned int w1 = 0xabcdef00u, w2 = 0xffff1122u;
	unsigned int rotate (unsigned int value, int n);
	printf ("%x\n", rotate (w1, 8));
	printf ("%x\n", rotate (w1, -16));
	printf ("%x\n", rotate (w2, 4));
	printf ("%x\n", rotate (w2, -2));
	printf ("%x\n", rotate (w1, 0));
	printf ("%x\n", rotate (w1, 44));
	return 0;
}

unsigned int rotate (unsigned int value, int n)
{
	unsigned int result, bits, sizeInteger = sizeof(int) * 8; //using sizeof() function to check bits
	
	// scale down the shift count to a defined range
	if ( n > 0 )
		n = n % sizeInteger;
	else
		n = -(-n % sizeInteger);
	if ( n == 0 )
		result = value;
	else if ( n > 0 ) { // left rotate
		bits = value >> (sizeInteger - n); //extracting bits throught left shift
		result = value << n | bits;
	}
	else { // right rotate
		n = -n;
		bits = value << (sizeInteger - n); //extracting bits throught right shift
		result = value >> n | bits; 
	}
	return result;
}
//exercise 4 finished