#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid- Prints the array reverse
 * @width: string
 * @height: string
 *
 * Return: Nothing
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	p = malloc(height * sizeof(int *));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(p[i]);
			}
			free(p);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
