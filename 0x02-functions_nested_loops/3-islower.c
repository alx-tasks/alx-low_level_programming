/**
 * _islower- this function checks if alphabet is lowercase.
 *
 * description:
 *    _islower(); --> 0 | 1
 */

int _islower(int c)
{
	int i = 'a';

	for (i; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}

	return (0);
}
