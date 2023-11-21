#include "lists.h"

/**
 * free_listp - The Entry Point.
 * Description - frees a linked list.
 * @head: head of a list.
 * Return: .
 */

void free_listp(listp_t **head)
{
	listp_t *t, *c;

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

/**
 * print_listint_safe - The Entry Point.
 * Description - prints a linked list.
 * @head: head of a list.
 * Return: number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nn = 0;
	listp_t *hp = NULL, *n, *a;

	while (head != NULL)
	{
		n = malloc(sizeof(listp_t));

		if (n == NULL)
			exit(98);

		n->p = (void *)head;
		n->next = hp;
		hp = n;

		a = hp;

		while (a->next != NULL)
		{
			a = a->next;
			if (head == a->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hp);
				return (nn);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nn++;
	}

	free_listp(&hp);
	return (nn);
}
