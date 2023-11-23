#include "main.h"

/**
 * get_bit - The Entry Point.
 * Description - returns the value of a bit at a given index.
 * @n: The bit.
 * @index: index of the bit.
 * Return: value of the bit, otherwise -1.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int m;

	if (n == 0 && index < 64)
		return (0);

	for (m = 0; m <= 63; n >>= 1, m++)
	{
		if (index == m)
		{
			return (n & 1);
		}
	}

	return (-1);
}
