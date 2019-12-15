#include "lists.h"
/**
 * delete_dnodeint_at_index - delete x node in a doubly linked list
 * @head: double pointer to the first node
 * @index: x node's position
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr, *curr2;
	dlistint_t *tmp = *head;
	size_t i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		(*head) = tmp->next;
		(*head)->prev = NULL;
		free(tmp);
		return (1);
	}

	while (i < index)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (-1);
		i++;
	}
	if (tmp->next == NULL)
	{
		curr = tmp->prev;
		curr->next = NULL;
		free(tmp);
		return (1);
	}
	curr = tmp->next;
	curr2 = tmp->prev;
	free(tmp);
	curr2->next = curr;
	curr->prev = curr2;
	return (1);
}
