
#include <stdio.h>

int main(void) {
	/* Step 1: define an array of integers P. Set all elements of P[i] to 0,
	 * 2 <= i <= n */
	size_t i, j;  /* size_t is unsigned long */
	int P[151]; /* 151 because the array's index starts at 0 */
	const size_t n = 150;

	for (i = 2; i <= n; ++i)
		P[i] = 0;

	/* Step 2: set i to 2 */
	i = 2;
	/* Step 3: If i > n, the algorithm terminates */
	while (i < n) {
		/* Step 4: If P[i] is 0, then i is prime */
		if (P[i] == 0) {
			/* Step 5: For all positive integer values of j, such i x j <= n,
			 * set P[i x j] to 1. NOTE: j is all the multiples of i. */
			for (j = i * i; j <= n; j += i){
				P[j] = 1;
			}
				
		}
		/* Step 6: Add 1 to i and go to step 3. */
		++i;
	}

	/* Print prime numbers */
	for (i = 0; i <= n; ++i)
		if(!P[i])
			printf(" %i", i);
	printf("\n");

	return 0;
}