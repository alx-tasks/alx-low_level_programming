/**
 * _putchar - writes the character c to stdout.
 * 
 * description:
 *    print_alphabet(void);
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}

/**
 * _puts - Prints a string followed by a newline.
 *
 * @str: value string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}

	_putchar('\n');
}
