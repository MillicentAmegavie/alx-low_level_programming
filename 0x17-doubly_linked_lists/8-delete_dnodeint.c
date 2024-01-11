#include "lists.h"

/**
 * delete_dnodeint_at_index - The entry point.
 * Description - deletes the node at index of a dlistint_t linked list.
 * @head: list head.
 * @index: index of new node.
 * Return: 1 on success, -1 on failure.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *l;
	dlistint_t *k;
	unsigned int m;

	l = *head;

	if (l != NULL)
		while (l->prev != NULL)
			l = l->prev;

	m = 0;

	while (l != NULL)
	{
		if (m == index)
		{
			if (m == 0)
			{
				*head = l->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				k->next = l->next;

				if (l->next != NULL)
					l->next->prev = k;
			}

			free(l);
			return (1);
		}
		k = l;
		l = l->next;
		m++;
	}

	return (-1);
}
