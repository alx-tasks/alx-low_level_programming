#include <stdio.h>

/**
 * Prints out the alphabet in lower case
 *
 * description:
 *    main(void); --> 0
 *
 * Return: 0
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	
	putchar('\n');

	return (0);
}
