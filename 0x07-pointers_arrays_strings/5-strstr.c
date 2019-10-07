#include "holberton.h"
/**
 * _strstr - prints a char in memory
 * @haystack: the address of memory to print
 * @needle: the char to print
 *
 * Return: s.
 */

char *_strstr(char *haystack, char *needle)
{
	int l1;


	for (l1 = 0; haystack[l1] != 0; l1++)
	{
		if (haystack[l1] == needle[0])
			return (haystack + l1);
	}
	return (0);
}
