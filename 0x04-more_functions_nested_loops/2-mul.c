#include <unistd.h>
#include "holberton.h"

/**
 * mul - writes the character c to stdout
 *
 * @c: The character to print
 * @d: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int mul(int c, int d)
{
	return (c * d);
}
