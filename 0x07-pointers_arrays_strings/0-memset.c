#include "main.h"

/**
 * _memset - The Entry Point.
 * Description - The function that fills memory with a constant byte,
 * @s: The memory area.
 * @b: The constant byte.
 * @n: The number of bytes filled.
 * Return: dest.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
		*(s + m) =  b;

	return (s);
}
