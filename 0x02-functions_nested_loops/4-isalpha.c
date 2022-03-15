/**
 * _isalpha - this function checks if value is an alphabet.
 *
 * description:
 *    _isalpha(); --> 0 | 1
 */

int _isalpha(int c)
{
	int i = 'a';

	for (i; i <= 'Z'; i++)
	{
		if (c == i)
		{
			return 1;
		}
	}

	return 0;
}
