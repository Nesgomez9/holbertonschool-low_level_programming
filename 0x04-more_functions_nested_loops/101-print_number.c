#include "holberton.h"
#include <stdio.h>

/**
 * print_number- writes the character c to stdout
 *
 *@n: the number to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_number(int n)
{
	int b, m;
	unsigned int c;

	b = 10;
	c = n;
	if (n >= 0 && n < 10)
	{
		_putchar(n + '0');
	}
	else if (n < 0 && n > -10)
	{
		n *= -1;
		_putchar('-');
		_putchar(n + '0');
	}
	else
	{
		if (n < 0)
		{
			n *= -1;
			_putchar('-');
		}
		c = n;
		while (c / b > 9)
		{
			b *= 10;
		}
		while (b > 0)
		{
			m = c / b;
			c %= b;
			_putchar(m + '0');
			b /= 10;
		}
	}
}
