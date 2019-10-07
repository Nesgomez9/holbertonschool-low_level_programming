#include "holberton.h"

/**
 * _memcpy - prints a char in memory
 * @dest: the address of memory to print
 * @src: the char to print
 * @n: the int to print
 *
 * Return: s.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
