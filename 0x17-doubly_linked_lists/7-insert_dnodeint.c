#include "lists.h"
/**
 * insert_dnodeint_at_index - frees memory of a list
 * @h: pointer to head of singly linked list
 * @idx: index of the position of the new node
 * @n: int of the node
 *
 * Return: No Return
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new, *tmp;

	if (!h)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	tmp = *h;
	if (!idx)
	{
		new->next = tmp;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	while (tmp)
	{
		if (i == idx -1)
		{
			new->next = tmp->next;
			new->prev = tmp;
			tmp->next = new;
			return (new);
		}
		i++;
		tmp = tmp->next;
	}
	return (NULL);
}
