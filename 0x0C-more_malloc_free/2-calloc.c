#include "main.h"
#include <stdlib.h>

/**
 * _calloc - The Ebtry Point.
 * Description - The function that allocates memory for an array.
 * @nmemb: The number of elements.
 * @size: The size of bytes.
 * Return: pointer to the allocated memory.
 * if nmemb = 0, size = 0, or malloc fail = NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(nmemb * size);

	if (m == NULL)
		return (NULL);

	for (a = 0; a < (nmemb * size); a++)
		m[a] = 0;

	return (m);
}
