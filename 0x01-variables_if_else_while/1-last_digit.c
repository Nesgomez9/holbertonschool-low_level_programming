#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	printf("Last digit of");
	printf("%d is", n);
	printf("%d", last);
	if (last > 5)
	{
		printf(" and is greater than 5\n");
	}
	if (last == 0)
	{
		printf(" and is 0\n");
	}
	else if (last < 6)
	{
		printf(" and is less than 6 and not 0\n");
	}
	return (0);
}
