#include "holberton.h"

/**
 * _strlen - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _strlen(char *s)
{
	int i = 1;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
