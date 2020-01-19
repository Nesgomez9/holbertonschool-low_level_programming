#include "hash_tables.h"

/**
 * hash_table_get - This is a function prototype
 * @ht: Pointer to the hash table
 * @key: The key to find
 *
 * Return: a pointer to the key if it succeeded, NULL otherwise
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node = NULL;
	unsigned long int index;

	if (!ht || !key || !key[0])
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node != NULL)
	{
		if (!strcmp(node->key, key))
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
