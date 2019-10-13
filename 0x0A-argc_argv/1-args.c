#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 * @argc: int
 * @argv: string
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (*argv)
		printf("%d\n", argc - 1);
	return (0);
}
