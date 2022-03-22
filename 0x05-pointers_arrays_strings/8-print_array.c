/**
 * print_array - Print the number of array base of value.
 *
 * @a: array int
 * @n: number to print
 */

void print_array(int *a, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }

	printf("\n");
}
