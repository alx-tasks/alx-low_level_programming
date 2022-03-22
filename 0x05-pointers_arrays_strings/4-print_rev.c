/**
 * print_rev - prints a string in reverse.
 *
 * @s: value string
 */

void print_rev(char *s)
{
	int i = strlen(s) - 1;

	for (i; i >= 0; i--)
	{
		putchar(s[i]);
	}

	putchar('\n');
}
