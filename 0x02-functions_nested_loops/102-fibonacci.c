#include <unistd.h>
#include <stdio.h>

/**
 * main - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int main(void)
{
	unsigned long int a, b, i;

	a = 1;
	b = 2;

	for (i = 0; i <= 50; i++)
	{
		printf("%lu, ", a);
		printf("%lu, ", b);
		a = a + b;
		b = b + a;
	}
	printf("\n");
	return (0);
}
