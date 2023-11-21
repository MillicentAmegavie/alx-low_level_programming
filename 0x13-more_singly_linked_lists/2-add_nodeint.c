#include "lists.h"

/**
 * add_nodeint - The Entry Point.
 * Description - Adds a new node at the beginning
 * of a linked list.
 * @head: A pointer to the address of the
 * head of a list.
 * @n: The n element.
 * Return: The address of the new element. If the
 * function fails - NULL.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
