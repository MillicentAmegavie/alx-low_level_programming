#include "search_algos.h"

/**
  * binary_search_recursive - Searches recursively for a value in a sorted
  *                           array of integers using binary search.
  * @array: pointer to the first element of the [sub]array to search.
  * @left: starting index of the [sub]array to search.
  * @right: ending index of the [sub]array to search.
  * @value: value to search for.
  *
  * Return: If the value is not present, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints the [sub]array being searched after each change.
  */

int binary_search_recursive(int *array, size_t left, size_t right, int value)
{
	size_t m;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (m = left; m < right; m++)
		printf("%d, ", array[m]);
	printf("%d\n", array[m]);

	m = left + (right - left) / 2;
	if (array[m] == value)
		return (m);
	if (array[m] > value)
		return (binary_search_recursive(array, left, m - 1, value));
	return (binary_search_recursive(array, m + 1, right, value));
}

/**
  * binary_search - Searches for a value in a sorted array
  *                 of integers using binary search.
  * @array: pointer to the first element of the array to search.
  * @size: number of elements in the array.
  * @value: value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints the [sub]array being searched after each change.
  */

int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (binary_search_recursive(array, 0, size - 1, value));
}
