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

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (i % 3 != 0 && i % 5 == 0 && i == 100)
		{
			printf("Buzz");
		}
		else if (i % 3 != 0 && i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}

	}
	printf("\n");
	return (0);
}
