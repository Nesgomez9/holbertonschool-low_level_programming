#include "holberton.h"
/**
 * set_bit - check the code for Holberton School students.
 * @n: unsigned int to print
 * @index: index
 *
 * Return: unsigned int.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;
	unsigned long int bin = 1;

	if (index > 64)
		return (-1);
	for (i = 0; i < index; i++)
		bin *= 2;

	*n |= bin;
	return (*n);
}
