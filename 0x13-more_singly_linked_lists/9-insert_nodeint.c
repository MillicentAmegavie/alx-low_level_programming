#include "lists.h"

/**
 * insert_nodeint_at_index - The Entry Point.
 * Description - inserts a new node at a given position.
 * @head: head of a list.
 * @idx: index of the list where the new node should be
 * added.
 * @n: The interger to contain the new node.
 * Return: the address of the new node, otherwise NULL if
 * function fails.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int m;
	listint_t *e, *h = *head;

	if (idx != 0)
	{
		for (m = 0; m < idx - 1 && h != NULL; m++)
		{
			h = h->next;
		}
	}

	if (h == NULL && idx != 0)
		return (NULL);

	e = malloc(sizeof(listint_t));
	if (e == NULL)
		return (NULL);

	e->n = n;

	if (idx == 0)
	{
		e->next = *head;
		*head = e;
	}
	else
	{
		e->next = h->next;
		h->next = e;
	}

	return (e);
}
