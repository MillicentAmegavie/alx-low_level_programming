#include "lists.h"

/**
 * add_dnodeint - The entry point.
 * Description - adds a new node at the beginning of a dlistint_t list.
 * @head: list head.
 * @n: element value.
 * Return: address of new element.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *m = malloc(sizeof(dlistint_t));
	dlistint_t *h;

	if (m == NULL)
		return (NULL);

	m->n = n;
	m->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	m->next = h;

	if (h != NULL)
		h->prev = m;

	*head = m;

	return (m);
}
