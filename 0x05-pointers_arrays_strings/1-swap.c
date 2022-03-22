/**
 * swap_int - swaps values of the two given pointers.
 *
 * @a: int a
 * @b: int b
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
