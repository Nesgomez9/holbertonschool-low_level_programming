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

	while (s[i] != c)
	{
		i++;
	}
	s += i;
	return (s);
}
