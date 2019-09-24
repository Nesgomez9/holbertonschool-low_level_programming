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
	int a, n;

	n = 0;

	for (a = 0; a < 1024; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			n = n + a;
		}
	}
	printf("%d\n", n);
	return (0);
}
