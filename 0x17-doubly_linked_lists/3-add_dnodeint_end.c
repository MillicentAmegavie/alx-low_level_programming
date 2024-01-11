#include "lists.h"

/**
 * add_dnodeint_end - The entry point.
 * Description - adds a new node at the end of a dlistint_t list.
 * @head: list head.
 * @n: element value.
 * Return: address of new element.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *m = malloc(sizeof(dlistint_t));

	if (m == NULL)
		return (NULL);

	m->n = n;
	m->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = m;
	}
	else
	{
		*head = m;
	}

	m->prev = h;

	return (m);
}
