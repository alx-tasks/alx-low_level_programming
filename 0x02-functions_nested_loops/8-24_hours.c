#include "_putchar.c"

/**
 * jack_bauer - this function prints the 24 hours of a day.
 *
 * description:
 *    jack_bauer();
 */

void jack_bauer(void)
{
	int h = 0;

	for (h; h < 24; h++)
	{
		int s = 0;

		for (s; s < 60; s++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((s / 10) + '0');
			_putchar((s % 10) + '0');
			_putchar('\n');
		}
	}
}
