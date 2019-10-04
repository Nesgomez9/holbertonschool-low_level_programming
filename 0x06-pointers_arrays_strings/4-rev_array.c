#include "holberton.h"

/**
 * reverse_array - writes the character c to stdout
 * @a: The character to print
 * @n: The length of the array
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	j = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		temp = a[j];
		a[j] = a[i];
		a[i] = temp;
		j--;
	}
}
