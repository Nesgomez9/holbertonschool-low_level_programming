#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - check the code for Holberton School students.
 * @max: size of the lenght
 * @min: int
 *
 *Return: Always 0.
 */

int *array_range(int min, int max)
{
	int *a;
	int i;

	if (min > max)
		return (NULL);

	a = malloc((max - min + 1) * sizeof(int));
	if (!a)
		return (NULL);
	for (i = 0; min <= max; min++, i++)
		a[i] = min;
	return (a);
}
