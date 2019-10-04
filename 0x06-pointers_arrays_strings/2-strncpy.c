#include "holberton.h"

/**
 * _strncpy - Function that concatenates two strings.
 * @dest: String destination.
 * @src: Source String.
 * @n: int.
 *
 * Return: dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int b;

	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[b] = src[b];
		b++;
	}
	while(b < n)
	{
		dest[b] = '\0';
		b++;
	}
	return (dest);
}
