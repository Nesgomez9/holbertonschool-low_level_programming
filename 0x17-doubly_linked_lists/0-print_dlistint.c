#include "lists.h"

/**
 * print_dlistint - Print all elements of a dlistint_t list
 * @h: pointer to head of listint_t list
 *
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%i\n", (*h).n);
		h = (*h).next;
		nodes++;
	}
	return (nodes);
}
