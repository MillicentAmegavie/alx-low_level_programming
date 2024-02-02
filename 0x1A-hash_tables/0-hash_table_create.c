#include "hash_tables.h"

/**
 * hash_table_create - The entry point.
 * Description - creates a hash table.
 * @size: size of the array
 * Return: the created hash table, otherwise NULL on failure.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *t;
	hash_node_t **a;
	unsigned long int m;

	t = malloc(sizeof(hash_table_t));
	if (t == NULL)
		return (NULL);

	a = malloc(sizeof(hash_node_t *) * size);
	if (a == NULL)
		return (NULL);

	for (m = 0; m < size; m++)
		a[m] = NULL;

	t->array = a;
	t->size = size;

	return (t);
}
