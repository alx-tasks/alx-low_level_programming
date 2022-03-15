/**
 * print_last_digit - this function returns the last digit of an int
 *
 * description:
 *    print_last_digit(int);
 */

int print_last_digit(int c)
{	
	int last_digit;

	if (c > 0)
	{
		last_digit = c % 10;
	}
	else
	{
		last_digit = (c * -1) % 10;
	}

	printf("%d", last_digit);

	return last_digit;
}
