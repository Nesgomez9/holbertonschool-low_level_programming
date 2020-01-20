#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: a pointer to the new table or NULL in case of fail
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->size = size;
	table->array = calloc(size, sizeof(hash_node_t *));
	if (!(table->array))
	{
		free(table);
		return (NULL);
	}

	return (table);
}
