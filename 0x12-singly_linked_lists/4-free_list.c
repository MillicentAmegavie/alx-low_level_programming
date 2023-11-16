#include "lists.h"

/**
 * free_list - The Entry Point.
 * Description - The function that frees a list.
 * @head: The head of the linked list.
 * Return: .
 */

void free_list(list_t *head)
{
	list_t *c;

	while ((c = head) != NULL)
	{
		head = head->next;
		free(c->str);
		free(c);
	}
}
