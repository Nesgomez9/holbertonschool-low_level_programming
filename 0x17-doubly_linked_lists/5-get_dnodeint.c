#include "lists.h"
/**
 * get_dnodeint_at_index - frees memory of a list
 * @head: pointer to head of singly linked list
 * @index: The index of the node
 *
 * Return: No Return
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while (i < index)
	{
		if (!head)
			return (NULL);
		i++;
		head = head->next;
	}
	return (head);
}
