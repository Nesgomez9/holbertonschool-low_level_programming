#include <unistd.h>
#include "holberton.h"

/**
 * print_alphabet_x10- writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphabet_x10(void)
{
	int a, b;

	for (b = 0 ; b < 10 ; b++)
	{
		for (a = 97 ; a <= 122 ; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
