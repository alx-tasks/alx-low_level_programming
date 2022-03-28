/**
 * _memcpy - Copies n bytes of src to dest.
 * @dest: char dest
 * @src: char src
 * @n: int n
 *
 * Return: *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ret = dest;

	while (n--)
	{
		*dest = *src;
		dest = dest + 1;
		src = src + 1;
	}

	return ret;
}
