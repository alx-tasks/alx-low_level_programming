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
	char *save = dest;
	
	for (; *dest; ++dest);
	while (*dest++ = *src++);
	return(save);
}
