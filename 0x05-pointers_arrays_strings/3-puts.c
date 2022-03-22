#include "_putchar.h";

/**
 * _puts - Prints a string followed by a newline.
 *
 * @str: value string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}

	putchar('\n');
}
