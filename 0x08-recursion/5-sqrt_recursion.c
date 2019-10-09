#include "holberton.h"

/**
 * _sqrt_recursion1 - print the factorial of a number
 * @n: int to find the root
 * @a: 1
 *
 * Return: the factorial
 */

int _sqrt_recursion1(int n, int a)
{
	if (a * a == n)
		return (a);
	if (a * a > n)
		return (-1);
	return (_sqrt_recursion1(n, a + 1));

}

/**
 * _sqrt_recursion - print the factorial of a number
 * @n: int to find the root
 *
 * Return: the factorial
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_recursion1(n, 1));

}
