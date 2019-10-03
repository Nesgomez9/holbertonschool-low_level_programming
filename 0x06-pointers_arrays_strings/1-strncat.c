#include "holberton.h"

/**
 * _strncat - Function that concatenates two strings.
 * @dest: String destination.
 * @src: Source String.
 * @n: int.
 *
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
