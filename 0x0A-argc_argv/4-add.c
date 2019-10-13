#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 *
 * @argc: size of argv
 * @argv: command vector arguments
 * Return: 1 if no arguments, otherwise 0
 */
int main(int argc, char *argv[])
{
	int c, i, sum;

	sum = 0;

	for (c = 1; c < argc; c++)
	{
		for (i = 0; argv[c][i] != '\0'; i++)
		{
			if (!isdigit(argv[c][i]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[c]);
	}
	printf("%d\n", sum);
	return (0);
}
