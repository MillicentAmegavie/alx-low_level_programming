#include "hash_tables.h"

/**
 * hash_table_print - The entry point.
 * Description - prints the keys and values of the hash table.
 * @ht: hash table pointer.
 * Return: .
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int m;
	hash_node_t *t;
	char *s;

	if (ht == NULL)
		return;

	printf("{");
	s = "";

	for (m = 0; m < ht->size; m++)
	{
		t = ht->array[m];
		while (t != NULL)
		{
			printf("%s'%s': '%s'", s, t->key, t->value);
			s = ", ";
			t = t->next;
		}
	}
	printf("}\n");
}
