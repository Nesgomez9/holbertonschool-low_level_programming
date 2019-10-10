#include "holberton.h"
/**
 * _strlen_recursion - Prints a len of a pointer
 * @s : Pointer
 * Return: Len of a pointer
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
		}
		s = s + 1;
		return (_strlen_recursion(s) + 1);
}
/**
 * compare - checks the words in the same position
 * @str : char to check
 * @len : final position
 * @tam : initial position
 * Return: if is a palindrome
 */
int compare(char *str, int len, int tam)
{
	if (tam >= len)
	{
		return (1);
		}
		if (str[len] == str[tam])
		{
			return (compare(str, len - 1, tam + 1));
			}
			return (0);
}
/**
 * is_palindrome - Check if a char is palindrome
 * @s : char to check
 * Return: 1 if is palindrome else 0
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	int tam = 0;

	return (compare(s, len - 1, tam));
}
