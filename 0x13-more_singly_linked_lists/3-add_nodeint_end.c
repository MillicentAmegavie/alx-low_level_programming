#include "lists.h"

/**
 * add_nodeint_end - The Entry Point.
 * Description - Adds a new node at the end
 * of a linked list.
 * @head: The head of a list.
 * @n: n element.
 * Return: the address of the new element. Otherwise,
 * NUll if function fails.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *m;

	(void)m;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	m = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (m->next != NULL)
		{
			m = m->next;
		}
		m->next = new;
	}

	return (*head);
}
