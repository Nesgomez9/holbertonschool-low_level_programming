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

	if (!n || !separator)
		return;
	va_start(numb, n);
	for (i = 0; i < n - 1; i++)
	{
		s = va_arg(numb, char *);
		if (!s)
		{
			printf("nil");
			return;
		}
		printf("%s%s", s, separator);
	}
	printf("%s\n", va_arg(numb, char *));
	va_end(numb);
}
