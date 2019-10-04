#include "holberton.h"

/**
 * rot13- Function that concatenates two strings.
 * @s: String destination.
 *
 * Return: dest.
 */

char *rot13(char *s)
{
	int len = 0;
	int i;
	char *c = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *n = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[len] != 0)
	{
		for (i = 0; c[i]; i++)
		{
			if (s[len] == c[i])
			{
				s[len] = n[i];
				break;
			}
		}
		len++;
	}
	return (s);
}
