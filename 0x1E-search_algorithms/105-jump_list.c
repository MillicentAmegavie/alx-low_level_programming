#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in an array of
 * integers using the Jump search.
 * @list: input list.
 * @size: size of the array.
 * @value: value to search in.
 * Return: index of the number.
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i, k, m;
	listint_t *p;

	if (list == NULL || size == 0)
		return (NULL);

	m = (size_t)sqrt((double)size);
	i = 0;
	k = 0;

	do {
		p = list;
		k++;
		i = k * m;

		while (list->next && list->index < i)
			list = list->next;

		if (list->next == NULL && i != list->index)
			i = list->index;

		printf("Value checked at index [%d] = [%d]\n", (int)i, list->n);

	} while (i < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)p->index, (int)list->index);

	for (; p && p->index <= list->index; p = p->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)p->index, p->n);
		if (p->n == value)
			return (p);
	}

	return (NULL);
}
