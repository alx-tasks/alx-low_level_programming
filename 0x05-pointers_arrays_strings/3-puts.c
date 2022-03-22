#include <unistd.h>

/**
 * _puts - Prints a string followed by a newline.
 *
 * @str: value string
 */
void _puts(char *str)
{
    char newline = '\n';

	while (*str != '\0')
	{
		write(1, &(*str++), 1);
	}

	write(1, &newline, 1);
}
