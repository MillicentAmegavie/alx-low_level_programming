#include "main.h"
#include <stdlib.h>

/**
 * create_array - The Entry Point.
 * Description - The function that creates an array of chars.
 * @size: The size of the array.
 * @c: The char to store in array.
 * Return: pointer of the array of chars
 */

char *create_array(unsigned int size, char c)
{
	char *m;
	unsigned int i;

	if (size == 0)
		return (NULL);

	m = malloc(sizeof(c) * size);

	if (m == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		m[i] = c;

	return (m);
}
