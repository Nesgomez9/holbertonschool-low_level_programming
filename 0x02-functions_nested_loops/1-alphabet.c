#include <unistd.h>
#include "holberton.h"
/**
 * print_alphabet - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet(void)
{
	int a = 97;

	for (; a <= 122 ; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
