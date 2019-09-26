#include <unistd.h>
#include "holberton.h"

/**
 * print_diagonal - writes the character c to stdout
 *
 * @n: the variable to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_diagonal(int n)
{
	int i, j, k;

	k = n;
	j = k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i == 0)
			{
			}
			else
			{
				for (; j < n; j++)
				{
				_putchar(' ');
				}
			}
			_putchar(92);
			_putchar('\n');
			j = --k;
		}
	}
}
