#include "holberton.h"
/**
 * _strdup - Prints the array reverse
 * @str: string
 *
 * Return: Nothing
 */

char *_strdup(const char *str)
{
	int i, size;
	char *dest;

	if (str == 0)
	{
		return (NULL);
	}
	for (size = 0; str[size] != 0; size++)
	{}
	dest = malloc((size + 1) * sizeof(char));
	if (dest == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		dest[i] = str[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * rev_string - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void rev_string(char *s)
{
	int i = 0;
	char temp;
	int j, len;

	while (s[i] != '\0')
	{
		i++;
	}

	i -= 1;
	len = i;
	if (i % 2 == 0)
	{
		for (j = 0; j < len / 2; j++)
		{
			temp = s[j];
			s[j] = s[i];
			s[i] = temp;
			i--;
		}
	}
	else
	{
		for (j = 0; j <= len / 2; j++)
		{
			temp = s[j];
			s[j] = s[i];
			s[i] = temp;
			i--;
		}

	}
}
/**
 * binary_to_uint - check the code for Holberton School students.
 * @b: char
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	int i, bin = 0, mul = 1;
	char *rev;

	if (b == NULL)
		return (0);
	rev = _strdup(b);
	rev_string(rev);
	for (i = 0; rev[i]; i++)
	{
		if (rev[i] == '1')
		{
			bin += mul;
			mul *= 2;
		}
		else if (rev[i] == '0')
			mul *= 2;
		else
			return (0);

	}
		return (bin);
}
