#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b, c, d, e, f;

	a = 0;
	b = 1;
	c = 1;
	d = 2;
	e = 2;
	f = 2;
	while (a < 9)
	{
		while (b < 9)
		{
			while (d <= 9)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(d + '0');
				if (a >= 7 && c >= 8 && e >= 9)
				{
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
				d++;
			}
			e++;
			b++;
			d = e;
		}
		c++;
		a++;
		f++;
		e = f;
		b = c;
		d = f;
	}
	putchar('\n');
	return (0);
}
