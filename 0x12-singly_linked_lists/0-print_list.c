#include "lists.h"

/**
 * print_list - The Entry Point.
 * Description - The function that prints all
 * the elements of a list_t list.
 * @h: The singly linked list.
 * Return: number of nodes in the h.
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
