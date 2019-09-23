#include <unistd.h>
#include "holberton.h"

/**
 * _abs - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _abs(int c)
{
	if (c >= 0)
	{
		return (c);
	}
	else
	{
		return ((-1 * c));
	}
}
