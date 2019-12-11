#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements of an array
 * @size: size of the elements
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int i, new_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = (char *)malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	new_size = nmemb * size;
	i = 0;
	while (new_size-- > 0)
		ptr[i++] = 0;

	return (ptr);
}

/**
 * error - prints "Error" message and exit
 * @status: error number
 */
void error(int status)
{
	char *error;

	error = "Error";
	while (*error != '\0')
		_putchar(*error++);
	_putchar('\n');
	exit(status);
}

/**
 * print_number - prints a number on string
 *
 * @mul: a pointer to store the product
 * @len1: string lenght of the first number
 * @len2: string lenght of the second number
 * Return: void
 */
void print_number(int *mul, int len1, int len2)
{
	int i;

	for (i = 0; mul[i] == 0; i++)
		;
	if (i >= len1 + len2 + 1)
		_putchar('0');
	while (i < (len1 + len2))
		_putchar(mul[i++] + '0');
	_putchar('\n');
}

/**
 * multiply - multiply two numbers
 * @mul: a pointer to store the product
 * @s_num1: a pointer to the first numbrer
 * @s_num2: a pointer to the second number
 * @len1: string length of the first number
 * @len2: string length of the second number
 * Return: pointer to the allocated memory to store mul
 */
int *multiply(int *mul, char *s_num1, char *s_num2, int len1, int len2)
{
	int i, j, n1, n2, temp = 0, remainder = 0;

	for (i = len1 - 1; i >= 0; i--)
	{
		remainder = 0;
		n1 = s_num1[i] - '0';
		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = s_num2[j] - '0';
			temp =  mul[i + j + 1] + (n1 * n2) + remainder;

			if (temp < 9 ||  (n1 * n2) < 9)
				remainder = 0;
			if (temp > 9)
				remainder = temp / 10;

			mul[i + j + 1] = temp % 10;
		}
		if (remainder >= 1)
			mul[i + j + 1] += remainder;
	}
	return (mul);
}

/**
 * main - multiplys two numbers
 * @argc: number of command line arguments
 * @argv: command line arguments
 *
 * Return: 0 Always (Success),
 * 1 if program does not receive two arguments
 */
int main(int argc, char *argv[])
{
	int i, j, len1, len2;
	int *mul;

	mul = NULL;

	if (argc != 3)
		error(98);

	for (j = 1; j <= 2; j++)
		for (i = 0; argv[j][i] != '\0'; i++)
			if (argv[j][i] < '0' || argv[j][i] > '9')
				error(98);
	len1 = 0;
	while (argv[1][len1] != '\0')
		len1++;
	len2 = 0;
	while (argv[2][len2] != '\0')
		len2++;

	mul = _calloc(len1 + len2 + 1, sizeof(int));
	if (mul == NULL)
		error(98);

	mul = multiply(mul, (char *)argv[1], (char *)argv[2], len1, len2);
	print_number(mul, len1, len2);

	free(mul);

	return (0);
}
