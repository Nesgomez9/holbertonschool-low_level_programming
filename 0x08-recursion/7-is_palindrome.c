#include "holberton.h"

/**
 * is_palindrome1 - Prints the array reverse
 * @s: array to rev
 *
 * Return: Nothing
 */
int is_palindrome1(char *s, int len)
{
	if (*s != *(s + len))
		return (0);
	else if (*s == 0)
		return (1);
	return(is_palindrome1(s + 1, len - 1));
}

int is_palindrome(char *s)
{
	return (is_palindrome1(s, 5));
}
