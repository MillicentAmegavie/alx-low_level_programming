#include "lists.h"

/**
 * get_nodeint_at_index - The Entry Point.
 * Description - locates a given node of a linked list.
 * @head: head of a list.
 * @index: index of the node.
 * Return: the located node. If node does not exist - NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	for (n = 0; n < index; n++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
