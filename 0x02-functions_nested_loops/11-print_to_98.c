#include <unistd.h>
#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - writes the character c to stdout
 *
 * @a: The character to count
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_to_98(int a)
{
	if (a < 98)
	{
		for (; a < 98; a++)
		{
			printf("%d, ", a);
		}
	}
	else
	{
		for (; a > 98; a--)
		{
			printf("%d, ", a);
		}
	}
	printf("98\n");
}
