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

	if (size <= 0)
	{
		dest = NULL;
		return (dest);
	}
	dest = malloc(size * sizeof(char));
	if (dest == 0)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
		dest[i] = c;
	dest[i] = '\0';
	return (dest);
}
