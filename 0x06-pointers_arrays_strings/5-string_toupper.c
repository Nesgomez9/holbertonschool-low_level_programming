#include "holberton.h"

/**
 * string_toupper - Function that concatenates two strings.
 * @s: String destination.
 *
 * Return: dest.
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] > 98 && s[i] < 123)
		{
			s[i] -= 32;
		}
	}
	return (s);
}
