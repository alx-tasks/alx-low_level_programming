#include "_putchar.c"

/**
 * print_alphabet_x10 - this function prints out alphabet in lowercase.
 *
 * description:
 *    print_alphabet_x10();
 */

void print_alphabet_x10(void)
{
	int j = 0;

	for (j = 0; j < 10; j++)
	{
		char i = 'a';

		for (i; i <= 'z'; i++)
		{
			_putchar(i);
		}

		_putchar('\n');
	}
}
