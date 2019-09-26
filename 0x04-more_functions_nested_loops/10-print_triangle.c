#include <unistd.h>
#include "holberton.h"

/**
 * print_triangle - writes the character c to stdout
 *
 * @size: the variable to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_triangle(int size)
{
	int i, j, j1, k;

	j1 = size - 1;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 0; j < j1; j++)
			{
				_putchar(' ');
			}
			for (k = 1; k <= i; k++)
			{
				_putchar('#');
			}
			j1--;
			_putchar('\n');
		}
	}
}
