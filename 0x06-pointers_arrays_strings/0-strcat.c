#include "string.h"

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
    int i, len;

	for (i = 0; dest[i] != '\0'; i++)
		len++;

    for (i = 0; src[i] != '\0'; i++)
		dest[len + i] = src[i];

	dest[strlen(dest)] = '\0';

	return dest;
}
