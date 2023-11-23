#include "main.h"

/**
 * binary_to_uint - The Entry Point.
 * Description - converts a binary number to an unsigned int.
 * @b: binary to a string of 0 and 1 chars.
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int m;
	int l, n;

	if (!b)
		return (0);

	m = 0;

	for (l = 0; b[l] != '\0'; l++)
		;

	for (l--, n = 1; l >= 0; l--, n *= 2)
	{
		if (b[l] != '0' && b[l] != '1')
		{
			return (0);
		}

		if (b[l] & 1)
		{
			m += n;
		}
	}

	return (m);
}
