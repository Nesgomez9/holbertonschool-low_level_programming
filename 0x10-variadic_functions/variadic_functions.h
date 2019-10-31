#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif

#ifndef _STRUCTS_H
#define _STRUCTS_H
/**
 * struct type - Struct op
 *
 * @t_p: The operator
 * @f: The function associated
 */
typedef struct type
{
	char *t_p;
	void (*f)(char *, va_list);
} type_d;
#endif
