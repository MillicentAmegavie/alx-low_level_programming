#include "hash_tables.h"

/**
 * shash_table_create - The entry point.
 * Description - creates a shash table with a given size.
 * @size: shash table size.
 * Return: the created shash table, otherwise NULL on function failure.
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *t;
	shash_node_t **a;
	unsigned long int m;

	t = malloc(sizeof(shash_table_t));
	if (t == NULL)
		return (NULL);

	a = malloc(sizeof(shash_node_t *) * size);
	if (a == NULL)
		return (NULL);

	for (m = 0; m < size; m++)
		a[m] = NULL;

	t->array = a;
	t->size = size;
	t->shead = NULL;
	t->stail = NULL;

	return (t);
}

/**
 * add_n_shash - The entry point.
 * Description - adds a node at the beginning of a shash at a given index.
 * @h: shash linked list head.
 * @key: shash key.
 * @value: value to store.
 * Return: node created.
 */

shash_node_t *add_n_shash(shash_node_t **h, const char *key, const char *value)
{
	shash_node_t *t;

	t = *h;

	while (t != NULL)
	{
		if (strcmp(key, t->key) == 0)
		{
			free(t->value);
			t->value = strdup(value);
			return (t);
		}
		t = t->next;
	}

	t = malloc(sizeof(shash_node_t));

	if (t == NULL)
		return (NULL);

	t->key = strdup(key);
	t->value = strdup(value);
	t->next = *h;

	*h = t;

	return (t);
}

/**
 * add_i_shash - The entry point.
 * Description - adds a node on the DLL of the shash table.
 * @ht: table pointer.
 * @new: new node to add.
 * Return: .
 */

void add_i_shash(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *t1, *t2;
	int r;

	t1 = t2 = ht->shead;

	while (t1 != NULL)
	{
		r = strcmp(new->key, t1->key);
		if (r == 0)
		{
			return;
		}
		else if (r < 0)
		{
			new->sprev = t1->sprev;

			if (t1->sprev)
				t1->sprev->snext = new;
			else
				ht->shead = new;

			t1->sprev = new;
			new->snext = t1;

			return;
		}
		t2 = t1;
		t1 = t1->snext;
	}

	new->sprev = t2;
	new->snext = NULL;

	if (ht->shead)
		t2->snext = new;
	else
		ht->shead = new;

	ht->stail = new;
}

/**
 * shash_table_set - The entry point.
 * Description - adds a hash (key, value) to a given shash table.
 * @ht: shash table pointer.
 * @key: shash key.
 * @value: value to store.
 * Return: Always 1 on success, otherwise 0 on failure.
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int m;
	shash_node_t *n;

	if (ht == NULL)
		return (0);

	if (key == NULL || *key == '\0')
		return (0);

	m = key_index((unsigned char *)key, ht->size);

	n = add_n_shash(&(ht->array[m]), key, value);

	if (n == NULL)
		return (0);

	add_i_shash(ht, n);

	return (1);
}

/**
 * shash_table_get - The entry point.
 * Description - retrieves a value associated with a key.
 * @ht: shash table pointer.
 * @key: shash key.
 * Return: shash value.
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int m;
	shash_node_t *t;

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

/**
 * shash_table_print - The entry point.
 * Description - prints the keys and values of the shash table.
 * @ht: shash table pointer.
 * Return: .
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *t;
	char *s;

	if (ht == NULL)
		return;

	printf("{");
	s = "";

	t = ht->shead;

	while (t != NULL)
	{
		printf("%s'%s': '%s'", s, t->key, t->value);
		s = ", ";
		t = t->snext;
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - The entry point.
 * Description - prints the keys and values of the shash table in reverse.
 * @ht: shash table pointer.
 * Return:.
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *t;
	char *s;

	if (ht == NULL)
		return;

	printf("{");
	s = "";

	t = ht->stail;

	while (t != NULL)
	{
		printf("%s'%s': '%s'", s, t->key, t->value);
		s = ", ";
		t = t->sprev;
	}

	printf("}\n");
}

/**
 * shash_table_delete - The entry point.
 * Description - deletes a shash table.
 * @ht: shash table pointer.
 * Return: .
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int m;
	shash_node_t *t1;
	shash_node_t *t2;

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
