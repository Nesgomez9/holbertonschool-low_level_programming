#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - check the code for Holberton School students.
 * @n: Number
 * @separator: string to separate the numbers
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list numb;
	unsigned int i;
	char *s;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(numb, n);
	for (i = 0; i < n - 1; i++)
	{
		s = va_arg(numb, char *);
		if (!s)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator)
			printf("%s", separator);
	}
	s = va_arg(numb, char *);
	if (!s)
		printf("(nil)\n");
	else
		printf("%s\n", s);
	va_end(numb);
}
