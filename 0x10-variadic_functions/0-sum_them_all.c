#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - check the code for Holberton School students.
 * @n: Number
 * @...: Arguments Variadic
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numb;
	unsigned int sum, i;

	sum = 0;

	if (!n)
		return (0);
	va_start(numb, n);
	for (i = 0; i < n; i++)
		sum += va_arg(numb, int);
	va_end(numb);
	return (sum);
}
