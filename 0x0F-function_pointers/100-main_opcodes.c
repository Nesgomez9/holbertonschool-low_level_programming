#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints an opcode
 * @argc: size of the argv array
 * @argv: array
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
