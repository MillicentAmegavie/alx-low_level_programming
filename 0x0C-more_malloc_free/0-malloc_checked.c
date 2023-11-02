#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - The Entry Point.
 * Description - The function that allocates memory.
 * @b: The amount of bytes.
 * Return: pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	char *m;

	m = malloc(b);
	if (m == NULL)
		exit(98);
	return (m);
}
