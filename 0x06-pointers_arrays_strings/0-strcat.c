/**
 * _strcat - Concatenates two strings.
 *
 * @dest: char dest pointer
 * @src: char source of copy
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
    int i = 0;
	int len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}

    for (i = 0; src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}

	dest[len + i] = '\0';

	return dest;
}
