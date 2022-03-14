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
	int num = '0';

	for (number = '0'; number <= '100'; number++)
	{
		for (num = '0'; num <= '9'; number++)
		{
			putchar(number);
			putchar(num);

			if (number != '9'  && num != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
