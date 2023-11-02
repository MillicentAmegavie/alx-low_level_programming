#include "main.h"
#include <stdlib.h>

/**
 * _realloc - The Entry Point.
 * Description - The function that reallocates a memory block.
 * @ptr: The pointer to the memory previously allocated.
 * @old_size: The size, in bytes of the allocated space of ptr.
 * @new_size: The new size, in bytes of the new memory block.
 * Return: ptr.
 * if new_size == old_size, returns ptr.
 * if malloc fails = NULL.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
