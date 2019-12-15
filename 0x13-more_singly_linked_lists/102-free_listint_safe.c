#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list
 * @h: Head of the list
 *
 * Description: Frees a listint_t list. It can frees lists with a loop
 * If the function fails, exit the program with status 98
 *
 * Return: The number of nodes in the list
 */
size_t free_listint_safe(listint_t **h)
{
	long int add_a, add_b, n = 1;
	listint_t *guard;

	if (h == NULL)
		return (0);

	if (*h == NULL)
		return (0);

	while (*h != NULL)
	{
		guard = (*h)->next;
		add_a = (long int)*h;
		add_b = (long int)(*h)->next;
		free(*h);
		*h = NULL;
		if (add_a - add_b <= 0)
			return (n);
		*h = guard;
		n++;
	}
	return (n - 1);
}
