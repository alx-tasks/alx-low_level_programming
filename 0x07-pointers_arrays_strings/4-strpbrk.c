/**
 * _strpbrk - Locates the first occurrence in the string s of any of the bytes in the string accept
 * @s: char *s
 * @accept: char *accept
 *
 * Return: @s
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
			if (*s == accept[i])
				return s;
		s++;
	}

	return '\0';
}
