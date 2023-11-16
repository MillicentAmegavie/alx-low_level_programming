#include "lists.h"

/**
 * add_node - The Entry Point.
 * Description - The function that adds a new node at the beginning
 * of a list_t list.
 * @head: The head of the linked list.
 * @str: The string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	size_t c;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	n->str = strdup(str);

	for (c = 0; str[c]; c++)
		;

	n->len = c;
	n->next = *head;
	*head = n;

	return (*head);
}
