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
	while (a <= 99)
	{
		if (a >= 10 && a < 12 || a >= 20 && a < 23 || a >= 30 && a < 34)
		{
		}
		else if (a >= 40 && a < 45 || a >= 50 && a < 56 || a >= 60 && a < 67)
		{
		}
		else if (a >= 70 && a < 78 || a > 80 && a < 89 || a >= 90 && a < 100)
		{
		}
		else
		{
		putchar(a / 10 + '0');
		putchar(a % 10 + '0');
		}
		if (a >= 10 && a < 12 || a >= 20 && a < 23 || a >= 30 && a < 34)
		{
		}
		else if (a >= 40 && a < 45 || a >= 50 && a < 56 || a >= 60 && a < 67)
		{
		}
		else if (a >= 70 && a < 78 || a > 80 && a < 90 || a >= 90 && a < 100)
		{
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}
	putchar('\n');
	return (0);
}
