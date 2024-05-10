#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array of
 * integers using the Jump search algorithm.
 * @array: input array.
 * @size: size of the array.
 * @value: value to search in.
 * Return: index of the number.
 */

int jump_search(int *array, size_t size, int value)
{
	int i, m, k, p;

	if (array == NULL || size == 0)
		return (-1);

	m = (int)sqrt((double)size);
	k = 0;
	p = i = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
		k++;
		p = i;
		i = k * m;
	} while (i < (int)size && array[i] < value);

	printf("Value found between indexes [%d] and [%d]\n", p, i);

	for (; p <= i && p < (int)size; p++)
	{
		printf("Value checked array[%d] = [%d]\n", p, array[p]);
		if (array[p] == value)
			return (p);
	}

	return (-1);
}
