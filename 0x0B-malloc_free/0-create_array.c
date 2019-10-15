#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - Prints the array reverse
 * @size: size
 * @c: char
 *
 * Return: Nothing
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *dest;

	dest = malloc(size * sizeof(char));
	for(i = 0; i < size; i++)
		dest[i] = c;
	dest[i] = 0;
	return (dest);
}
