#include "holberton.h"
/**
 * get_bit - check the code for Holberton School students.
 * @n: unsigned int to print
 * @index: index
 *
 * Return: unsigned int.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0)
		return (0);
	if (index > 64)
		return (-1);
	for (i = 0; i < index; i++)
		n = n >> 1;

	if (n | 0)
		return (n & 1);
	else
		return (-1);
}
