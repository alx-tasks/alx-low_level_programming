/**
 * _strlen - check string length.
 *
 * @s: value of string
 *
 * Return int
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return length;
}
