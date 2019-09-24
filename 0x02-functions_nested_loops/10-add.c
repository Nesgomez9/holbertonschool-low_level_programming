#include <unistd.h>
#include "holberton.h"

/**
 * add - writes the character c to stdout
 *
 * @b: The character to plus
 * @a: The character to plus
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int add(int a, int b)
{
	return (a + b);
}
