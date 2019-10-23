#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - check the code for Holberton School students.
 * @argc: int
 * @argv: array
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2, resul;
	int (*oper)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '+'
	     && argv[2][0] != '/' && argv[2][0] != '%') || strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] != '/' || argv[2][0] != '%') && (atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);

	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	oper = get_op_func(argv[2]);
	resul = oper(num1, num2);
	printf("%i\n", resul);
	return (0);
}
