#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b, i, c, p[99];

	a = 0;
	b = 1;
	c = 2;

	for (i = 0; i <= 99; i++)
	{
		p[i] = i;
	}
	for (; a <= 98; a++)
	{
		for (; b <= 99; b++)
		{
			putchar(a / 10 + '0');
			putchar(a % 10 + '0');
			putchar(' ');
			putchar(b / 10 + '0');
			putchar(b % 10 + '0');
			if (!(a == 98 && b == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
		b = p[c];
		c++;
	}
	putchar('\n');
	return (0);
}
