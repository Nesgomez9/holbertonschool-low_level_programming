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
	int l, l2, i, j, a;

	l = 0, l2 = 0, c = 0;
	while (haystack[l] != '\0')
		l++;
	while (needle[l2] != '\0')
		l2++;
	for (i = 0; i < l; i++, haystack++)
	{
		for (j = 0, c = 0; j < l2; j++)
		{
			if (haystack[j] == 0)
				break;
			if (haystack[j] == needle[j])
			{
				a += 1;
			}
		}
		if (a == l2)
			return (haystack);
	}
	return (0);
}
