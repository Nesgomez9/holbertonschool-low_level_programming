#include "holberton.h"
/**
 * print_binary - check the code for Holberton School students.
 * @n: unsigned int to print
 *
 * Return: unsigned int.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');

}
