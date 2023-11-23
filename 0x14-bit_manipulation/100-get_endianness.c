#include "main.h"

/**
 * get_endianness - The Entry Point.
 * Description - checks the endianness.
 * Return: if big endian = 0, if little endian = 1.
 */

int get_endianness(void)
{
	unsigned int m;
	char *n;

	m = 1;
	n = (char *) &m;

	return ((int)*n);
}
