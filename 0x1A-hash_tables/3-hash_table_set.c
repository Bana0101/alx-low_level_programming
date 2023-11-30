#include "hash_tables.h"

/**
 * hash_table_set - a function that add an element to the table
 * @ht: the hash table
 * @key: the key
 * @value: the value
 * Return: 0 or 1
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *current, *node;
	unsigned long int index;

	if (!ht || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = (ht->array)[index + 1];
	ht->array[index] = node;
	return (1);
}

