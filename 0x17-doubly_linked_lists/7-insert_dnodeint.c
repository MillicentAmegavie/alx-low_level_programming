#include "lists.h"

/**
 * insert_dnodeint_at_index - The entry point.
 * Description - inserts a new node at a given position.
 * @h: list head.
 * @idx: index of new node.
 * @n: value of new node.
 * Return: address of new node, otherwise NULL on failure.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *k;
	dlistint_t *head;
	unsigned int m;

	k = NULL;
	if (idx == 0)
		k = add_dnodeint(h, n);
	else
	{
		head = *h;
		m = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (m == idx)
			{
				if (head->next == NULL)
					k = add_dnodeint_end(h, n);
				else
				{
					k = malloc(sizeof(dlistint_t));
					if (k != NULL)
					{
						k->n = n;
						k->next = head->next;
						k->prev = head;
						head->next->prev = k;
						head->next = k;
					}
				}
				break;
			}
			head = head->next;
			m++;
		}
	}

	return (k);
}
