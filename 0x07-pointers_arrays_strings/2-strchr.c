#include "holberton.h"
/**
 * _strchr - prints a char in memory
 * @c: the address of memory to print
 * @s: the char to print
 *
 * Return: s.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != c && s[i] != 0)
	{
		i++;
	}
	if (s[i] == 0)
	{
		s = 0;
	}
	else
	{
		s += i;
	}
	return (s);
}
