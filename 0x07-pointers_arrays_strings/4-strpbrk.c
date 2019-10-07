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
	int i, j, l1, l2;

	l1 = 0, l2 = 0;

	while (s[l1] != 0)
		l1++;
	while (accept[l2] != 0)
		l2++;

	for (i = 0; i < l1; i++, s++)
	{
		for (j = 0; j < l2; j++)
		{
			if (*s == *(accept + j))
			{
				return (s);
			}
		}
	}
	return (0);
}
