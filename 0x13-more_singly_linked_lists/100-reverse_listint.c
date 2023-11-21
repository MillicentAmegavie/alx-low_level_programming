#include "lists.h"

/**
 * reverse_listint - The Entry point.
 * Description - reverses a linked list.
 * @head: head of a list.
 * Return: pointer to the first node.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *m = NULL, *n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = m;
		m = *head;
		*head = n;
	}

	*head = m;
	return (*head);
}
