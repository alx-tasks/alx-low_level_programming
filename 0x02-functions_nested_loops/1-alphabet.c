#include "_putchar.c"

/**
 * print_alphabet - this function prints out alphabet in lowercase.
 *
 * description:
 *    print_alphabet(void);
 */

void print_alphabet(void)
{
	char i = 'a';

	for (i; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');

}
