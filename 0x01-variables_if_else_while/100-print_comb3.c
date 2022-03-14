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
        for (int num = '1'; num <= '9'; num++)
        {
            if (number != num)
            {
                putchar(number);
                putchar(num);
                putchar(',');
            }
        }
    }

	putchar('\n');

	return (0);
}
