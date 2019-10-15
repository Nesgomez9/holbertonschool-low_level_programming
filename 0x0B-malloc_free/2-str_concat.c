#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - Prints the array reverse
 * @s1: string
 * @s2: string
 *
 * Return: Nothing
 */

char *str_concat(char *s1, char *s2)
{
	int i, size1, size2, j;
	char *dest;

	if (s1 == 0)
		s1 = "";
	else if (s2 == 0)
		s2 = "";
	for (size1 = 0; s1[size1]; size1++)
	{}
	for (size2 = 0; s2[size2]; size2++)
	{}

	dest = malloc((size1 + size2 + 1) * sizeof(char));

	if (dest == 0)
		return (NULL);

	for (i = 0; i < size1 ; i++)
		dest[i] = s1[i];
	for (i = 0, j = size1; i <= size2; i++, j++)
		dest[j] =s2[i];

	return (dest);
}
