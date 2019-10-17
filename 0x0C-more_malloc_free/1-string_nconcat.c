#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - check the code for Holberton School students.
 * @n: size of the lenght
 * @s1: first string
 * @s2: second string
 *
 *Return: Always 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, cont, a;
	char *dest;

	if (!s1)
		s1 = 0;
	else
		for (i = 0; s1[i]; i++)
		{}

	if (!s2)
		n = 0;

	dest = malloc((n + i + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	for (cont = 0, a = 0; cont < (n + i); cont++)
	{
		if (cont < i)
			dest[cont] = s1[cont];
		else
			dest[cont] = s2[a++];
	}
	dest[cont] = 0;
	return (dest);
}
