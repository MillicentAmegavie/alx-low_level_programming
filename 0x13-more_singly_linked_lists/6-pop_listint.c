#include "lists.h"

/**
 * pop_listint - The Entry Point.
 * Description - deletes the head node of
 * a linked list
 * @head: The head of a list.
 * Return: head node's data.
 */

int pop_listint(listint_t **head)
{
	int h;
	listint_t *m, *c;

	if (*head == NULL)
		return (0);

	c = *head;

	h = c->n;

	m = c->next;

	free(c);

	*head = m;

	return (h);
}
