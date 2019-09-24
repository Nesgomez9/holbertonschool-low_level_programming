#include <unistd.h>
#include "holberton.h"

/**
 * print_times_table - writes the character c to stdout
 * @n: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_times_table(int n)
{
	int a, b;

	if (n <= 15 && n >= 0)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				if (b == 0)
				{
					_putchar((a * b) + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					if (((a * b) / 10) < 1)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar((a * b) + '0');
					}
					else if ((((a * b) / 10) >= 1) && (((a * b) / 10) < 10))
					{
						_putchar(' ');
						_putchar(((a * b) / 10) + '0');
						_putchar(((a * b) % 10) + '0');
					}
					else
					{
						_putchar(((a * b) / 100) + '0');
						_putchar((((a * b) % 100) / 10) + '0');
						_putchar((((a * b) % 100) % 10) + '0');
					}
				}
			}
			_putchar('\n');
			}
		}
}
