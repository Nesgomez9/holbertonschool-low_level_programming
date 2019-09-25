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
	unsigned long int a, b, i,c, d, n;

	a = 1;
	b = 2;
	n = 0;

	for (i = 0; i < 25; i++)
	{
		if(a < 4000000 && b < 4000000)
		{
			if(a % 2 == 0)
			{
				n = n+ a;
			}
			else if(b % 2 == 0)
			{
				n = n + b;
			}
			else
			{
			}
			a = a + b;
			b = b + a;
		}
	}
	printf("%lu\n", n);
	return (0);
}
