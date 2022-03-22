#include <string.h>
#include <stdio.h>
#include <math.h>

/**
 * puts_half - prints half a string.
 *
 * @str: value string
 */
void puts_half(char *str)
{
	int i, len = strlen(str), start = floor(len / 2) + len % 2;

	for (i = start; i < len; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
