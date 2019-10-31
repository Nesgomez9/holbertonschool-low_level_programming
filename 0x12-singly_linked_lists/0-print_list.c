#include "lists.h"

/**
 * print_list - check the code for Holberton School students.
 *
 * @h: h
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
	int size = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		size++;
	}
	return (size);
}
