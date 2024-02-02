#include "hash_tables.h"

/**
 * hash_table_get - The entry point.
 * Description - retrieves a value associated with a key.
 * @ht: hash table pointer.
 * @key: hash key.
 * Return: hash value.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int m;
	hash_node_t *t;

	if (ht == NULL)
		return (NULL);

	if (key == NULL || *key == '\0')
		return (NULL);

	m = key_index((unsigned char *)key, ht->size);

	t = ht->array[m];

	while (t != NULL)
	{
		if (strcmp(t->key, key) == 0)
			return (t->value);
		t = t->next;
	}

	return (NULL);
}
