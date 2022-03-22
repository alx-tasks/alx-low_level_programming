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
	int i, len = strlen(str);

    for (i = floor(len/2); i < len; i++)
    {
        putchar(str[i]);
    }

	putchar('\n');
}
