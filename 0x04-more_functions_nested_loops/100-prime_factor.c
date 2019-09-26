#include <unistd.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(void)
{
	int i;
	unsigned long int a;

	a = 612852475143;

	for  (i = 2; i <= 10000; i++)
	{
		if (a % i == 0)
		{
			if ((i == 2) || (i == 3) || (i == 5) || (i == 7))
			{
				a = a / i;
			}
			else if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0)
			{
				a = a / i;
			}
		}

	}
	printf("%lu", a);
	printf("\n");
	return (0);
}
