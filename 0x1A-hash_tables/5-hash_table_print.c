#include "hash_tables.h"

/**
 * hash_table_print - This is a function prototype
 * @ht: Pointer to the hash table
 *
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL;
	unsigned long int i = 1;
	int status = 0;

	if (!ht)
		return;
	printf("{");
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node)
		{
			if (status)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			status = 1;
		}
		i++;
	}
	printf("}\n");
}
