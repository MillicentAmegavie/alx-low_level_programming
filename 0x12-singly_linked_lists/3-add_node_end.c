#include "lists.h"

/**
 * add_node_end - The Entry Point.
 * Description - The function that adds a new node at the end
 * of a list_t list.
 * @head: The head of the linked list.
 * @str: The string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n, *t;
	size_t c;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	n->str = strdup(str);

	for (c = 0; str[c]; c++)
		;

	n->len = c;
	n->next = NULL;
	t = *head;

	if (t == NULL)
	{
		*head = n;
	}
	else
	{
		while (t->next != NULL)
			t = t->next;
		t->next = n;
	}

	return (*head);
}
