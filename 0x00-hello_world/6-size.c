#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of a char: %ld byte(s)\n", sizeof(i));
	printf("Size of a char: %ld byte(s)\n", sizeof(li));
	printf("Size of a char: %ld byte(s)\n", sizeof(lli));
	printf("Size of a char: %ld byte(s)\n", sizeof(f));
	return (0);
}
