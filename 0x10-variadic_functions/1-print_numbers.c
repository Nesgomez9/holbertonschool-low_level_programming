#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - check the code for Holberton School students.
 * @n: Number
 * @separator: string to separate the numbers
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numb;
	unsigned int i;

	if (!n)
		return;
	va_start(numb, n);
	for (i = 0; i < n - 1; i++)
	{
		printf("%d", va_arg(numb, int));
		if (separator)
			printf("%s", separator);
	}
	printf("%d\n", va_arg(numb, int));
	va_end(numb);
}
