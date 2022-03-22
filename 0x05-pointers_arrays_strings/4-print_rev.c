#include <string.h>
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 *
 * @str: value string
 */
void print_rev(char *str)
{
	char temp;
    int i=0, j=0;
    j=strlen(str)-1;

    while(i<j)
    {
        temp=str[j];
        str[j]=str[i];
        str[i]=temp;
        i++;
        j--;
    }

    printf("%s\n", str);
}
