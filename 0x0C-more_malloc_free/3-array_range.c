#include "main.h"
#include <stdlib.h>

/**
 * array_range - The Entry Point.
 * Description - The function that creates an array of integers.
 * @min: The minimum value.
 * @max: The maximum value.
 * Return: pointer to the newly created array.
 * if man > mix, malloc fails = NULL.
 */

int *array_range(int min, int max)
{
	int *a, m;

	if (min > max)
		return (NULL);

	a = malloc(sizeof(*a) * ((max - min) + 1));

	if (a == NULL)
		return (NULL);

	for (m = 0; min <= max; m++, min++)
		a[m] = min;

	return (a);
}
