#include "hash_tables.h"

/**
 * hash_table_set - This is a function prototype
 * @ht: Pointer to the hash table
 * @key: Is a string
 * @value: Is a string
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	hash_node_t *node = NULL;
	unsigned long int index;
	char *value2 = NULL, *key2 = NULL;

	if (!ht || !key || !key[0])
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];
	value2 = strdup(value);
	if (!value2)
		return (0);

	while (node != NULL)
	{
		if (!strcmp(node->key, key))
		{
			free(node->value);
			node->value = value2;
			return (1);
		}
		node = node->next;
	}
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (free(value2), 0);

	key2 = strdup(key);
	if (!key2)
		return (free(value2), free(node), 0);

	node->key = key2;
	node->value = value2;
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
