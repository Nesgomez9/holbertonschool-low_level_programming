#include "lists.h"

/**
 * print_listint - check the code for Holberton School students.
 *
 * @h: h
 * Return: Always 0.
 */
size_t print_listint(const listint_t *h)
{
	int size = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}
	return (size);
}
