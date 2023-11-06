#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - The Entry Point.
 * Description - The function that creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 * Return: struct dog, otherwise NULL.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int m, ln, lo;

	p_dog = malloc(sizeof(*p_dog));
	if (p_dog == NULL || !(name) || !(owner))
	{
		free(p_dog);
		return (NULL);
	}

	for (ln = 0; name[ln]; ln++)
		;

	for (lo = 0; owner[lo]; lo++)
		;

	p_dog->name = malloc(ln + 1);
	p_dog->owner = malloc(lo + 1);

	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->owner);
		free(p_dog->name);
		free(p_dog);
		return (NULL);
	}

	for (m = 0; m < ln; m++)
		p_dog->name[m] = name[m];
	p_dog->name[m] = '\0';

	p_dog->age = age;

	for (m = 0; m < lo; m++)
		p_dog->owner[m] = owner[m];
	p_dog->owner[m] = '\0';

	return (p_dog);
}
