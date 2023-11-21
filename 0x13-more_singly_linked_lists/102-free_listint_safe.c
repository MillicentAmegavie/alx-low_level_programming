#include "lists.h"

/**
 * free_listp2 - The Entry Point.
 * Description - frees a linked list.
 * @head: head of a list.
 * Return: .
 */

void free_listp2(listp_t **head)
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
 * free_listint_safe - The Entry Point.
 * Description - frees a linked list.
 * @h: head of a list.
 * Return: size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t nn = 0;
	listp_t *hp, *n, *a;
	listint_t *c;

	hp = NULL;
	while (*h != NULL)
	{
		n = malloc(sizeof(listp_t));

		if (n == NULL)
			exit(98);

		n->p = (void *)*h;
		n->next = hp;
		hp = n;

		a = hp;

		while (a->next != NULL)
		{
			a = a->next;
			if (*h == a->p)
			{
				*h = NULL;
				free_listp2(&hp);
				return (nn);
			}
		}

		c = *h;
		*h = (*h)->next;
		free(c);
		nn++;
	}

	*h = NULL;
	free_listp2(&hp);
	return (nn);
}
