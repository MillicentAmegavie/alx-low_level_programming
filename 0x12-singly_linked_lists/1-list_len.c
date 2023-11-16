#include "lists.h"

/**
 * list_len - The Entry Point.
 * Description - The function that returns the number
 * of elements in a list.
 * @h: The singly linked list.
 * Return: number of elements in the h.
 */

size_t list_len(const list_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
