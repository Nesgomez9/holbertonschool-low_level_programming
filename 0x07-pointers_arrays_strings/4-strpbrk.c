#include "holberton.h"

/**
 * _strpbrk - prints a char in memory
 * @accept: the address of memory to print
 * @s: the char to print
 *
 * Return: s.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (*s == *(accept + j))
			{
				return (s);
			}
		}
	}
	return (0);
}
