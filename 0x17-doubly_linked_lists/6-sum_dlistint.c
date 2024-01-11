#include "lists.h"

/**
 * sum_dlistint - The entry point.
 * Description - returns the sum of all the data (n) of a doubly linked list.
 * @head: list head.
 * Return: data sum.
 */

int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			s += head->n;
			head = head->next;
		}
	}

	return (s);
}
