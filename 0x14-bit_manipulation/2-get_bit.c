#include "holberton.h"
/**
 * print_binary - check the code for Holberton School students.
 * @n: unsigned int to print
 *
 * Return: unsigned int.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
		n = n >> 1;
	if (n | 0)
		return (n & 1);
	else
		return (-1);
}
