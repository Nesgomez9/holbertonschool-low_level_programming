#include <unistd.h>
#include "holberton.h"

/**
 * print_last_digit - writes the character c to stdout
 *
 * @a: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int print_last_digit(int a)
{
	if (a < 0)
	{
		_putchar(((a % 10) * (-1)) + '0');
		return ((a % 10) * (-1));
	}
	else
	{
		_putchar((a % 10) + '0');
		return (a % 10);
	}
}
