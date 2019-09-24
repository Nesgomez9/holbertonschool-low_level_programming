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

	for (i = 0; i < 25; i++)
	{
		if (i < 24)
		{
			printf("%lu, ", a);
			printf("%lu, ", b);
			a = a + b;
			b = b + a;
		}
		else
		{
			printf("%lu, ", a);
			printf("%lu", b);
		}
	}
	printf("\n");
	return (0);
}
