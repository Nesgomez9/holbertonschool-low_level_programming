#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - check the code for Holberton School students.
 * @d: the struct
 *
 * Return: Always 0.
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		((*d).name ? printf("Name: %s\n", (*d).name) : printf("Name: (nil)\n"));
		((*d).age ? printf("Age: %.6f\n", (*d).age): printf("Age: (nil)\n"));
		((*d).owner ? printf("Owner: %s\n", (*d).owner) : printf("Owner: (nil)\n"));
	}
	else
		return;
}
