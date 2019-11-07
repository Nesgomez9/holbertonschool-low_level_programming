#include "holberton.h"
/**
 * clear_bit - check the code for Holberton School students.
 * @n: unsigned int to print
 * @index: index
 *
 * Return: unsigned int.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;
	unsigned long int bin = 1;

	if (index > 63)
		return (-1);

	for (i = 0; i < index; i++)
		bin *= 2;

	if (!(*n ^ bin))
		*n ^= bin;

	return (1);
}
