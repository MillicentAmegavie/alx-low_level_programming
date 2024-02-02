#include "hash_tables.h"

/**
 * hash_table_delete - The entry point.
 * Description - deletes a hash table.
 * @ht: hash table pointer.
 * Return: .
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int m;
	hash_node_t *t1;
	hash_node_t *t2;

	if (ht == NULL)
		return;

	for (m = 0; m < ht->size; m++)
	{
		t1 = ht->array[m];
		while ((t2 = t1) != NULL)
		{
			t1 = t1->next;
			free(t2->key);
			free(t2->value);
			free(t2);
		}
	}
	free(ht->array);
	free(ht);
}
