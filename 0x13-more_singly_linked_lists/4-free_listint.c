#include "lists.h"

/**
 * free_listint - The Entry Point.
 * Description - frees a linked list.
 * @head: The head of a list.
 * Return: .
 */

void free_listint(listint_t *head)
{
	listint_t *t;

	while ((t = head) != NULL)
	{
		head = head->next;
		free(t);
	}
}
