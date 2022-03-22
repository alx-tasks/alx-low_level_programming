#include <string.h>
#include <stdio.h>

/**
 * rev_string - prints a string in reverse.
 *
 * @s: value string
 */

void rev_string(char *s)
{
	char *r_str = s;

	while (*(r_str + 1) != '\0')
	{
	    r_str++;
	}
	

	while (r_str > s)
	{
		char tmp = *r_str;
		*r_str-- = *s;
		*s++ = tmp;
	}

	printf("%s", r_str);
}
