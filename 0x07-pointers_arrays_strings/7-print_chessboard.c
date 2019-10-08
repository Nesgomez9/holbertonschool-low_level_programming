#include "holberton.h"
#include <stdio.h>
/**
 * print_chessboard - Prints the chessboard
 * @a: pointer
 *
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int b1;
	int b;
	int len = sizeof(*a) / sizeof(char);

	for (b1 = 0; b1 < len; b1++)
	{
		for (b = 0; b < len; b++)
		{
			_putchar(a[b1][b]);
		}
		_putchar('\n');
	}
}
