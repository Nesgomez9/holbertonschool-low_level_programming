#include "holberton.h"

/**
 * _strcmp - Function that concatenates two strings.
 * @s2: String destination.
 * @s1: Source String.
 *
 * Return: dest.
 */

int _strcmp(char *s1, char *s2)
{
	int i, n;

	i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			n = 0;
		}
		else
		{
			n = s1[i] - s2[i];
			break;
		}
		i++;
	}
	return (n);
}
