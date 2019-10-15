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
	int i, size1, size2, a, j;
	char *dest;

	if (s1 == 0 || s2 == 0)
	{
		return (NULL);
	}
	for (size1 = 0; s1[size1] != 0; size1++)
	{}
	for (size2 = 0; s2[size2] != 0; size2++)
	{}
	dest = malloc((size1 + size2) * sizeof(char));
	if (dest == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size1; i++)
		dest[i] = s1[i];
	a = size1 + size2;
	for (j = 0; i < a; i++, j++)
		dest[i] = s2[j];
	dest[i] = '\0';
	return (dest);
}
