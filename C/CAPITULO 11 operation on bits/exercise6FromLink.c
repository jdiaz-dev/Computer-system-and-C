/* 
 * 6. Write a function called bitpat_search() that looks for the occurrence of
 * a specified pattern of bits inside an unsigned int. The function should
 * take three arguments and should be called as shown:
 *
 * 		bitpat_search (source, pattern, n)
 *
 * The function searches the integer source, starting at the leftmost bit, to
 * see if the rightmost n bits of pattern occur in source. If the pattern is
 * found, have the function return the number of the bit at which the pattern
 * begins, where the leftmost bit is bit number 0. If the pattern is not found,
 * then have the function return -1. So, for example, the call
 *
 * 		index = bitpat_search (0xe1f4, 0x5, 3);
 *
 * causes the bitpat_search() function to search the number 0xe1f4 ( = 1110
 * 0001 1111 0100 binary ) for the occurrence of the three-bit pattern 0x5 (=
 * 101 binary). The function returns 11 to indicate that the pattern was found
 * in the source beginning with bit number 11.
 *
 * Make certain that the function makes no assumptions about the size of an int
 * (see exercise 3 in this chapter).
 *
 * By Faisal Saadatmand
 */

#include <stdio.h>
#include <stdbool.h>

/* functions */
size_t int_size();
int bitpat_search(unsigned int source, unsigned pattern, unsigned n);

size_t int_size()
{
	int x = ~0;
	size_t i = 0;

	while (x != 0x0) {
		x <<= 1;
		++i;
	}

	return i;
}

/* Function that searches source for a given pattern of bits. */
int bitpat_search(unsigned int source, unsigned pattern, unsigned n) // unsigned == unsigned int
{
	unsigned nLSBs, nMSBs, size, b, bits;
	int num1 = 0x0; // ~num1 = 11111111111111111111111111111111
	unsigned int num2 = 0x0u; // ~num2 = 11111111111111111111111111111111
	size = int_size();

	/* out of bounds check to avoid undefined behaviour */
	if (n < 1 || n > size - n)
		return -1;

	/* mask with n least significant bits set to 1 */
	nLSBs = ~(~num1 << n); //nLSBs = 0111

	/* mask with n most significant bits set to 1 */
	nMSBs = ~(~num2 >> n); // note the unsigned suffix  //nMSBs = 11100000000000000000000000000000

	pattern &= ~(~num2 << n); //reconfirming pattern   //pattern = 0101 
	for (b = size; b != n; --b) {
		bits = (source & nMSBs) >> (b - n) ; //doing the possible match (source & nMSBs) and movint until LSBs  >> (b - n)
		if (bits == pattern){
			return size - b; 
		}
		nMSBs >>= 1;//decreasing 1 by 1 the nMSBs
	}

	return -1;
}

int main(void) 
{
  unsigned int num = 0xe1f4, //1110000111110100
							pattern = 0x5, //0101
							digits = 3;
	int index;

	printf("int size on this machine: %lu bits\n", int_size());

	index = bitpat_search(num, pattern, digits);

	if (index < 0)
		printf("Match not found.\n");
	else
		printf("Match found at bit %i (bit 0 is the leftmost bit)\n", index);

	return 0;
	
}
