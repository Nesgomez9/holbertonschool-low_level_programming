#include "lists.h"
/**
 * sum_dlistint - frees memory of a list
 * @head: pointer to head of singly linked list
 *
 * Return: No Return
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int count = 0;

	if (!tmp)
		return (0);
	while (tmp->next)
	{
		count += tmp->n;
		tmp = tmp->next;
	}
	count += tmp->n;
	return (count);
}
