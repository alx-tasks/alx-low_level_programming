#include <unistd.h>

/**
 * print_rev - prints a string in reverse.
 *
 * @s: value string
 */

void print_rev(char *s)
{
	char newline = '\n';
	int i = strlen(s) - 1;

	for (i; i >= 0; i--)
	{
		write(1, &(*s + 1), 1);
	}

	write(1, &newline 1);
}
