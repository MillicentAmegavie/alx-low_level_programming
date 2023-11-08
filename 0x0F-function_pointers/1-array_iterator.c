#include "function_pointers.h"

/**
 * array_iterator - The function executes a function given as a
 * parameter on each element of an array.
 * @array: The input integer array.
 * @size: The size of the array.
 * @action: The pointer to the function.
 * Return: .
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
