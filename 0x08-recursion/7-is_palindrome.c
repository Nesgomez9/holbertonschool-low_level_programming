#include "holberton.h"

/**
 * _strlen_recursion - print the length of a string
 * @s: array to count the length
 *
 * Return: the length
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return (0);
	}
		return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome1 - Prints the array reverse
 * @s: array to rev
 * @i: int
 * @len: int
 *
 * Return: Nothing
 */
int is_palindrome1(char *s, int i, int len)
{
	if (i >= len)
	{
		return (1);
	}
	if (s[len] == s[i])
	{
		return (is_palindrome1(s, len - 1, i + 1));
	}
	return (0);
}

/**
 * is_palindrome - Prints the array reverse
 * @s: array to rev
 *
 * Return: Nothing
 */

int is_palindrome(char *s)
{
	int i = 0;
	int len = _strlen_recursion(s);

	return (is_palindrome1(s, i, len - 1));
}
