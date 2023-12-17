#include "hash_tables.h"

/**
 * hash_table_set - adds new element to hash table
 *
 * @ht: hash table to add element to
 * @key: key to add
 * @value: value associated to key
 *
 * Return: 1 if successful, 0 if else
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *tuple;
	char *value_cpy = NULL;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	for (tuple = ht->array[index]; tuple != NULL; tuple = tuple->next)
	{
		if (strcmp(tuple->key, key) == 0)
		{
			value_cpy = strdup(value);
			if (value_cpy == NULL)
				return (0);
		}
		free(tuple->value);
		tuple->value = value_cpy;
		return (1);
	}
	tuple = malloc(sizeof(*tuple));
	if (tuple == NULL)
		return (0);
	tuple->key = strdup(key);
	tuple->value = strdup(value);
	if (tuple->key == NULL || tuple->value == NULL)
	{
		free(tuple->key);
		free(tuple->value);
		free(tuple);
		return (0);
	}
	tuple->next = ht->array[index];
	ht->array[index] = tuple;
	return (1);
}
