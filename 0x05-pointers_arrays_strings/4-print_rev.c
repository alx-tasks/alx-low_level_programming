#include <string.h>
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 *
 * @s: value string
 */
void print_rev(char *s)
{
	int len, i;

	len = strlen(s);

	for (i = (len - 1); i >= 0; i--)
	{
		putchar(*(s + i));
	}

	putchar('\n');
}
