/**
 * _strlen - checks the length of a string.
 *
 * @s: value string
 *
 * Return: int
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
