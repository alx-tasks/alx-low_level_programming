#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * description:
 *    main(void); --> 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
	printf("%ld is positive\n", (long int)n);
	else if (n == 0)
	printf("%ld is zero\n", (long int)n);
	else
	printf("%ld is negative\n", (long int)n);
	
	return (0);
}