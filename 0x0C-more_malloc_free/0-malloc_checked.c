#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - check the code for Holberton School students.
 * @b: size of the lenght
 * Return: Always 0.
 */

void *malloc_checked(unsigned int b)
{
	void *q;

	q = malloc(b);
	if (!q)
		exit(98);
	return (q);
}
