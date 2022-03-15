#include <unistd.h>

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
