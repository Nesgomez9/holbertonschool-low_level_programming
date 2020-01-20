#include "hash_tables.h"

/**
 * hash_table_delete - This is a function prototype
 * @ht: Pointer to the hash table
 *
 * Return: Nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node = NULL;
	unsigned long int i = 1;

	if (!ht)
		return;
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node)
		{
			free(node->value);
			free(node->key);
			free(node);
			node = node->next;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
