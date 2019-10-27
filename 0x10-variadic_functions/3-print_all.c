#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * p_char - check the code for Holberton School students.
 * @separator: Number
 * @p: list
 * Return: Always 0.
 */
void p_char(char *separator, va_list p)
{
	printf("%s%c", separator, va_arg(p, int));
}
/**
 * p_int - check the code for Holberton School students.
 * @separator: Number
 * @p: list
 * Return: Always 0.
 */
void p_int(char *separator, va_list p)
{
	printf("%s%i", separator, va_arg(p, int));
}
/**
 * p_float - check the code for Holberton School students.
 * @separator: Number
 * @p: list
 * Return: Always 0.
 */
void p_float(char *separator, va_list p)
{
	printf("%s%f", separator, va_arg(p, double));
}
/**
 * p_string - check the code for Holberton School students.
 * @separator: Number
 * @p: list
 * Return: Always 0.
 */
void p_string(char *separator, va_list p)
{
	char *s = va_arg(p, char *);
		if (!s)
		{
			s = "(nil)";
		}
			printf("%s%s", separator, s);
}

/**
 * print_all - check the code for Holberton School students.
 * @format: Number
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	int i, j;
	char *sep = "";
	va_list p;
	type_d type []= {
		{"c", p_char},
		{"i", p_int},
		{"f", p_float},
		{"s", p_string},
		{NULL, NULL}
	};

	va_start(p, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (type[j].t_p)
		{
			if (format[i] == type[j].t_p[0])
			{
				type[j].f(sep, p);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(p);
}
