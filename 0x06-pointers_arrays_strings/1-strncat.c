#include <string.h>

/**
 * *_strncat - concatenates src to dest
 * 
 * @dest: char dest
 * @src: char src
 * @n: int n
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, dest_len = 0;

	for (i = 0; dest[i] != '\0'; i++)
		dest_len++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	dest[strlen(dest)] = '\0';

	return (dest);
}
