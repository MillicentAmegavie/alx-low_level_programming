#include "lists.h"

/**
 * find_listint_loop - The Entry Point.
 * Description - finds the loop in a linked list.
 * @head: head of a list.
 * Return: the address of the node where the loop starts.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p = head, *pr = head;

	while (head && p && p->next)
	{
		head = head->next;
		p = p->next->next;

		if (head == p)
		{
			head = pr;
			pr =  p;
			while (1)
			{
				p = pr;
				while (p->next != head && p->next != pr)
				{
					p = p->next;
				}
				if (p->next == head)
					break;

				head = head->next;
			}
			return (p->next);
		}
	}

	return (NULL);
}
