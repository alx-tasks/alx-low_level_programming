#include "holberton.h"

/**
 * _strstr - finds the first occurrence of the substring needle in the string haystack.
 *           The terminating null bytes (\0) are not compared.
 * @haystack: char *haystack
 * @needle: char *needle
 *
 * Return: pointer to this occurence in @haystack
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *a = haystack;
		char *b = needle;

		while (*haystack && *b && (*haystack == *b))
		{
			haystack++;
			b++;
		}

		if (!*b)
		{
			return a;
		}

		haystack = a + 1;
	}

	return '\0';
}