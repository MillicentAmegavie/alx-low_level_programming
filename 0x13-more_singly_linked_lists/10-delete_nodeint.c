#include "lists.h"

/**
 * delete_nodeint_at_index - The Entry Point.
 * Description - deletes the node at index of a linked list.
 * @head: head of a list.
 * @index: index of the list where the node is deleted.
 * Return: 1 on success, -1 on failure.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t, *c = *head;
	unsigned int n;

	if (c == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(c);
		return (1);
	}

	for (n = 0; n < (index - 1); n++)
	{
		if (c->next == NULL)
			return (-1);

		c = c->next;
	}

	t = c->next;
	c->next = t->next;
	free(t);
	return (1);
}
