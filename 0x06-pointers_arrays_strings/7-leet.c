#include "holberton.h"

/**
 * leet- Function that concatenates two strings.
 * @s: String destination.
 *
 * Return: dest.
 */

char *leet(char *s)
{
	int len = 0;
	int i;
	char *c = "aAeEoOtTlL";
	char *n = "43071";

	while (s[len] != 0)
	{
		for (i = 0; c[i]; i++)
		{
			if (s[len] == c[i])
			{
				s[len] = n[i / 2];
				break;
			}
		}
		len++;
	}
	return (s);
}
