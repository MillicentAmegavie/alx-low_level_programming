#include "lists.h"

/**
 * free_listint2 - The Entry Point.
 * Description - frees a linked list.
 * @head: The head of a list.
 * Return: .
 */

void free_listint2(listint_t **head)
{
	listint_t *t, *c;

	if (head != NULL)
	{
		c = *head;
		while ((t = c) != NULL)
		{
			c = c->next;
			free(t);
		}
		*head = NULL;
	}
}
