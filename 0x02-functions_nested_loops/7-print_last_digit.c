/**
 * print_last_digit - this function returns the last digit of an int
 *
 * description:
 *    print_last_digit(int);
 */

int print_last_digit(int c)
{
	int last_digit = c % 10;

	if (c < 0)
	{
		last_digit = last_digit * -1;
	}

	printf(last_digit + '0');

	return last_digit;
}
