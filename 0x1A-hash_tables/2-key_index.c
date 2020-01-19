#include "hash_tables.h"
/**
 * key_index - Function that gives a index to a key
 * @key: Key
 * @size: size of the array
 *
 * Return: index that will be necesary to save the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int number;

	number = hash_djb2(key);
	return (number % size);
}
