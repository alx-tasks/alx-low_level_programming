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

	for (number; number <= '9'; number++)
	{
		putchar(number);

		if (number != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
