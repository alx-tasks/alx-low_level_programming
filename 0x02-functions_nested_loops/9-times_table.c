/**
 * times_table - this function prints the times table of 9.
 *
 * description:
 *    times_table();
 */

void times_table(void)
{
	int i, j, times, t, o;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			times = i * j;
			t = times / 10;
			o = times % 10;

			if (j == 0)
			{
				_putchar('0');
			}
			else if (times < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(o + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(t + '0');
				_putchar(o + '0');
			}
		}

		_putchar('\n');
	}
}
