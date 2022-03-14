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

	for (number = '0'; number <= '9'; number++)
	{
		for (num = '1'; num <= '9'; num++)
		{
			if (num!=number)
			{
				putchar(number);
				putchar(num);
				if (number+num >! 89)
				{
					putchar(',');
					putchar(' ');
				} 
		    }
			
		}
	}

	putchar('\n');

	return (0);
}
