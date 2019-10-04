#include "holberton.h"

/**
 * cap_string - Function that concatenates two strings.
 * @s: String destination.
 *
 * Return: dest.
 */

char *cap_string(char *s);
{
	int i, len;
	char *c = " \t\n,;.ª?\"(){}";

	len = 0;
	while (s[len] != 0)
	{
		if ((s[0] >= 97) && (s[0] <= 122))
			s[0] -= 32;

		for (i = 0; c[i]; i++)
		{
			if (s[len] == c[i])
			{
				if (s[len + 1] >= 97 && s[len + 1] <= 122)
				{
					s[len + 1] -= 32;
					break;
				}
			}
		}
		len++;
	}
}
