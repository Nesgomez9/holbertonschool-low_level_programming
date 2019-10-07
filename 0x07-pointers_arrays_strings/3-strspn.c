#include "holberton.h"

/**
 * _strspn - prints a char in memory
 * @accept: the address of memory to print
 * @s: the char to print
 *
 * Return: s.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j;
	unsigned int n = 0;

	while (s[i] != 0)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
			}
		}

		i++;
		if (i > n)
		{
			break;
		}

	}
	return (n);
}
