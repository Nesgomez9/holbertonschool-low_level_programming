#include "lists.h"

/**
 * list_len - check the code for Holberton School students.
 *
 * @h: h
 * Return: Always 0.
 */
size_t list_len(const list_t *h)
{
	int size = 0;

	while (h)
	{
		h = h->next;
		size++;
	}
	return (size);
}
