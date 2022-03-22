#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints a string followed by a new line.
 *
 * @str: value string
 */
void puts2(char *str)
{
	int len = strlen(str) - 1, i = 0;

	for (i; i <= len; i += 2)
	{
		putchar(*(str + i));
	}

	putchar('\n');
}
