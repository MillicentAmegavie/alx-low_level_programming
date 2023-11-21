#include "lists.h"

/**
 * sum_listint - The Entry Point.
 * Description - returns the sum of all the data (n) of
 * a linked list.
 * @head: head of a list.
 * Return: sum of all the data, otherwise 0 if list is empty.
 */

int sum_listint(listint_t *head)
{
	int s = 0;

	while (head != NULL)
	{
		s += head->n;
		head = head->next;
	}

	return (s);
}
