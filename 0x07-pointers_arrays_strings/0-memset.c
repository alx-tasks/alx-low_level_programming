/**
 * _memset - Sets the memory address 's' with constant byte 'b'.
 * @s: char s
 * @b: char b
 * @n: number bytes to filled
 *
 * Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
