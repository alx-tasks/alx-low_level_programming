#include <string.h>
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 *
 * @str: value string
 */
void print_rev(char *str)
{
	int i, j, count = 0;
	char rev[100];

	while (str[count] != '\0')
	{
		count++;
	}

	j = count - 1;

	for (i = 0; i < count; i++)
	{
		rev[i] = str[j];
		j--;
	}

	printf("%s", rev);
}
