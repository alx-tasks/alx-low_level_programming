#include <stdio.h>

/**
 * main - Prints out the alphabet in lower case.
 *
 * description:
 *    main(void); --> 0
 *
 * Return: 0
 */
int main(void)
{
	int number = '0';

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}

	putchar('\n');

	return (0);
}
