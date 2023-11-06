#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - The Entry Point.
 * Description - The function that frees dogs.
 * @d: The struct dog.
 * Return: .
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
