#include <stdio.h>
#include <string.h>

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
    int i, len = strlen(dest);
    
    for (i = 0; src[i] != '\0'; i++)
        dest[len + i] = src[i];

	return (dest);
}
