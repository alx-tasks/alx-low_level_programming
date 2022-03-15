#include "holberton.h"

/**
 * print_sign - this function prints sign of a value.
 *
 * description:
 *    print_sign(); --> 1 | 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return 1;
	}
	else if (n < 0)
	{
		_putchar('-');

		return -1;
	}

	_putchar('0');

	return 0;
}
