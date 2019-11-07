#include "holberton.h"
/**
 * flip_bits - check the code for Holberton School students.
 * @n: unsigned int to print
 * @m: index
 *
 * Return: unsigned int.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int cont = 0;
	unsigned int i;

	for (i = 0; (n | 0); i++)
	{
		if ((n & 1) != (m & 1))
			cont++;
		n = n >> 1;
		m = m >> 1;
	}
	return (cont);
}
