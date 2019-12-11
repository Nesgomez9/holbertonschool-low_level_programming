#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - Finds the loop in a listint_t list
 * @head: Head of the list
 *
 * Description: Finds a loop in a linked list
 *
 * Return: The node where is the loop or NULL if does not have loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *add_a, *add_b;

	if (head == NULL)
		return (NULL);

	add_a = head;
	add_b = head;

	while (1)
	{
		add_a = add_a->next;
		if (add_b->next == NULL)
			return (NULL);
		else if ((add_b->next)->next == NULL)
			return (NULL);

		add_b = (add_b->next)->next;

		if (add_a == add_b)
			break;
	}
	add_a = head;
	while (add_a != add_b)
	{
		add_a = add_a->next;
		add_b = add_b->next;
	}
	return (add_a);
}
