#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * coins - adds positive numbers
 *
 * @c: int
 * Return: 1 if no arguments, otherwise 0
 */
int coins(int c)
{
	int n = 0;

	while (c != 0)
	{
		if (c >= 25)
		{
			n += c / 25;
			c = c % 25;
		}
		else if (c >= 10)
		{
			n += c / 10;
			c = c % 10;
		}
		else if (c >= 5)
		{
			n += c / 5;
			c = c % 5;
		}
		else if (c >= 2)
		{
			n += c / 2;
			c = c % 2;
		}
		else if (c >= 1)
		{
			n += c / 1;
			c = c % 1;
		}
	}
	return (n);
}
/**
 * main - adds positive numbers
 *
 * @argc: size of argv
 * @argv: command vector arguments
 * Return: 1 if no arguments, otherwise 0
 */
int main(int argc, char *argv[])
{
	int c, i, n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 0; argv[1][i] != 0; i++)
	{
		if (!isdigit(argv[1][i]))
		{
			printf("Error\n");
			return (1);
		}
	}
	c = atoi(argv[1]);
	n = coins(c);
	printf("%d\n", n);
	return (0);
}
