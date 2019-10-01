#include "holberton.h"

/**
 * _atoi - writes the character c to stdout
 * @s: The array to be transform
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _atoi(char *s)
{
	int x, y, a, n;

	x = 0;
	y = 1;
	n = 0;

	while ((s[x] < '0') || (s[x] > '9'))
	{
		if (s[x] < 48 && s[x] > 57 && s[y] >= 48 && s[y] <= 57)
		{
			n = (s[y] - '0');
		}
		y = ++x;
	}
	while (s[x] >= 48 && s[x] <= 57)
	{
		n = (n * 10) + s[x] - '0';
		x++;
	}
	for (a = 0; a < x; a++)
	{
		if (s[a] == '-')
		{
			n *= -1;
		}
	}
	return (n);
}
