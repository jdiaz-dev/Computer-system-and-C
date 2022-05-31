/* 
 * 5. Write a function called bit_test() that takes two arguments: an unsigned
 * int and a bit number n. Have the function return 1 bit number n if it is on
 * inside the word, and 0 if it is off. Assume that bit number 0 references the
 * leftmost bit inside the integer. Also write a corresponding function called
 * bit_set() that takes two arguments: an unsigned int and a bit number n. Have
 * the function return result of turning the bit n on inside the integer.
 *
 * By Faisal Saadatmand 
 */

#include <stdio.h>

/* functions */
size_t int_size();
size_t bit_test(unsigned int, size_t);
unsigned int bit_set(unsigned int, size_t);

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

/* Function to check the On/Off status of a given bit inside an integer */
//this function check if w is inside the word
size_t bit_test(unsigned int w, size_t n)
{
	size_t offset, mask;
	/* location of n starting from the least significant bit */
	offset = int_size() - 1 - n;

	mask = 0x1 << offset;
	
	//help to print
	int help = w & mask;
	// printf("-----help bit_test %x\n", help);
    /* Extract and return the bit */
	return w & mask;
}

/* Function to set the status of a bit to On inside an integer */
//this function turn on bit n and return value 
unsigned int bit_set(unsigned int w, size_t n)
{
	size_t offset, mask;

	/* location of n starting from the least significant bit */
	offset = int_size() - 1 - n;

	mask = 0x1 << offset;
	
	//help to print
	int help = w | mask;
	// printf("-----help bit_set %x\n", help);

	// turn on bit n and return value 
	return  w | mask;
}

int main(void) 
{
	unsigned int w1 = 0xfffff0f0u; //11111111111111111111000011110000
	unsigned int w2 = 1000000000; 
	const size_t bit = 0; /* least significant bit, i.e. rightmost bit */

	/* out of bounds check */
	if (bit < 0 ||  bit > int_size() - 1) {
		printf("Bit number is outside of word-size bounds\n");
		return -1;
	}

	printf("test w1 ===>  %x: bit %lu is %s\n", w1, bit, (bit_test(w1, bit)) ? "ON" : "OFF");
	printf("test w1 ===>  %x: turned bit %lu ON\n", bit_set(w1, bit), bit);

	printf("test w2 ===>  %x: bit %lu is %s\n", w2, bit, (bit_test(w2, bit)) ? "ON" : "OFF");
	printf("test w2 ===>  %x: turned bit %lu ON\n", bit_set(w2, bit), bit);

	printf("NOTE: bit 0 is the leftmost bit\n");
	return 0;
}

//exercise 5 finished