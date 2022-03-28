/**
 * _strspn - Returns the number of bytes in the initial segment of s which consist only of bytes from accept.
 * @s: char *s
 * @accept: char *
 *
 * Return: char *s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int j;

	if (!*s || !*accept)
	{
		return n;
	}

	while (*s)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == *s)
			{
				n++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return n;
			}
		}
		s++;
	}

	return n;
}
