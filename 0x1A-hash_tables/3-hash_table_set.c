#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - The entry point.
 * Description - function that adds an element to the hash table.
 * @ht: The hash table.
 * @key: new element key.
 * @value: new element value.
 * Return: Always 1 on success, otherwise 0 on failure.
 */

int
hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int m = 0;
	hash_node_t *nhn = NULL;
	hash_node_t *t = NULL;

	if (!ht || !key || !(*key) || !value)
		return (0);

	m = key_index((unsigned char *)key, ht->size);
	t = ht->array[m];

	/* check if key exists */
	while (t && strcmp(t->key, key) != 0)
		t = t->next;

	/* update value if key already exists */
	if (t)
	{
		free(t->value);
		t->value = strdup(value);
		return (1);
	}

	/* add new node if key not found */

	nhn = malloc(sizeof(*nhn));
	if (!nhn)
		return (0);

	nhn->key = strdup(key);
	nhn->value = strdup(value);

	nhn->next = ht->array[m];
	ht->array[m] = nhn;

	return (1);
}
