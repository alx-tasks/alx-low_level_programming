#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix of integers.
 * @a: int *a
 * @size: int size
 */
void print_diagsums(int *a, int size)
{
	int i, j, s = 0;

	for (i = 0; i < size; i++)
		s += *(a + i * size + i);

	printf("%d, ", s);

	s = 0;

	for (j = 0; j < size; j++)
		s += *(a + size * (j + 1) - (j + 1));

	printf("%d\n", s);
}
