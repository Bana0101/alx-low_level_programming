#include "hash_tables.h"

/**
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, first = 0;
	hash_node_t *current;

	if (!ht || !ht->size || !ht->array)
		return;
	current = ht->array[i];
	while (i < ht->size)
	{
		if (current && !first)
		{
			printf("{\'%s\': \'%s\'",current->key, current->value);
			first = 1;
			i++;
			current = ht->array[i];
			continue;
		}
		if (current && first)
			printf(", \'%s\': \'%s\'",current->key, current->value);
		if (i == ht->size - 1 && first)
			printf("}\n");
		i++;
		current = ht->array[i];
	}
}
