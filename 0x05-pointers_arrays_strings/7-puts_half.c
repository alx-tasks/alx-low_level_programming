#include <string.h>
#include <stdio.h>

/**
 * puts_half - prints half a string.
 *
 * @str: value string
 */

void puts_half(char *str)
{
	int i, len = strlen(str);

    for (i = len/2; i < len; i++)
    {
        putchar(str[i]);
    }

	putchar('\n');
}
