#include "main.h"

/**
 * clear_bit - The Entry Point.
 * Description - sets the value of a bit to 0, at a given index.
 * @n: pointer to the bit.
 * @index: index of the bit.
 * Return: 1 on Success, Otherwise -1 on failure.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 63)
		return (-1);

	a = 1 << index;

	if (*n & a)
		*n ^= a;

	return (1);
}
