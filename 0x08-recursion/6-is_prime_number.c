#include "holberton.h"

/**
 * is_prime_number1 - print the factorial of a number
 * @n: int to find the root
 * @a: 1
 *
 * Return: the factorial
 */

int is_prime_number1(int n, int a)
{
	if (n < 2)
		return (0);
	if (a == n)
		return (1);
	if (n % a == 0 && a != 1 && n != a)
		return (0);
	return (is_prime_number1(n, a + 1));

}

/**
 * is_prime_number - print the factorial of a number
 * @n: int to find the root
 *
 * Return: the factorial
 */

int is_prime_number(int n)
{
	return (is_prime_number1(n, 1));

}
