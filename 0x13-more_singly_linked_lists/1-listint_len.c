#include "lists.h"

/**
 * listint_len - The Entry Point.
 * Description - Returns the number of elements in
 * a linked list.
 * @h: A pointer to the head of a list.
 * Return: numbers of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t nn = 0;

	while (h != NULL)
	{
		h = h->next;
		nn++;
	}
	return (nn);
}
