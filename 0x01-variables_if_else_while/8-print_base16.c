#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	a = 0;
	while (a <= 15)
	{
		if (a <= 9)
		{
			putchar(a + '0');
		}
		else
		{
			putchar(a + 'W');
		}
		a++;
}
	printf("\n");
	return (0);
}
