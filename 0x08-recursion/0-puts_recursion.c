#include "holberton.h"

/**
 * _puts_recursion - prints an array
 * @s: array
 *
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
