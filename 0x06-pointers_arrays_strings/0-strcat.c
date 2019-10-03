#include "holberton.h"

/**
 * _strcat - Function that concatenates two strings.
 * @dest: String destination.
 * @src: Source String.
 *
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	int a, b, c;

	a = 0;
	b = 0;
	c = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		b++;
	}
	while (c <= b)
	{
		dest[a] = src[c];
		a++;
		c++;
	}
	return (dest);
}
