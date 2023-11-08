#include "function_pointers.h"

/**
 * int_index - The Entry Point.
 * Description - The function that searches for an integer.
 * @array: The input integer array.
 * @size: The size of the array.
 * @cmp: The pointer to the function to be used
 * to compare values.
 * Return: index of the first element for which the cmp
 * function does not return 0. If no elements matches
 * or size <= 0 - -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
