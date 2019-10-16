#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - Free
 * @grid: Pointer
 * @height: Number
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	    free(grid);
}
