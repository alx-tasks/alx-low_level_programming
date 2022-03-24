/**
 * *_strcat - Concatenates two strings.
 *
 * @dest: char dest pointer
 * @src: char source of copy
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	strcpy (dest + strlen (dest), src);
	return dest;
}
