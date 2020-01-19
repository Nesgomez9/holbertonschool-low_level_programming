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

	hash_node_t *hnode = NULL, *collnode = NULL;
	unsigned long int index;
	char *valuedup = NULL, *keydup = NULL;

	if (!ht || !(ht->array) || !key || !key[0])
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	hnode = ht->array[index];
	valuedup = strdup(value);
	if (!valuedup)
		return (0);

	while (hnode != NULL)
	{
		if (!strcmp(hnode->key, key))
		{
			free(hnode->value);
			hnode->value = valuedup;
			return (1);
		}
		hnode = hnode->next;
	}

	collnode = malloc(sizeof(hash_node_t));
	if (collnode == NULL)
		return (free(valuedup), 0);

	keydup = strdup(key);
	if (!keydup)
		return (free(valuedup), free(collnode), 0);

	collnode->key = keydup;
	collnode->value = valuedup;
	collnode->next = hnode;
	ht->array[index] = collnode;

	return (1);
}
