#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Assigns a random value to n each time it is executed.
 *
 * description:
 *    main(void); --> 0
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int x;
	char begin[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;

	if (x > 5)
		printf("%s %ld is %d and is greater than 5\n", begin, (long int)n, x);
	else if (x == 0)
		printf("%s %ld is %d and is 0\n", begin, (long int)n, x);
	else if ((x < 6) && (x != 0))
		printf("%s %ld is %d and is less than 6 and not 0\n", begin, (long int)n, x);

	return (0);
}
