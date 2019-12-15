#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	dlistint_t *head;
	int sum;

	head = NULL;
	sum = sum_dlistint(head);
	printf("sum = %d\n", sum);
	return (EXIT_SUCCESS);
}
