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
	dlistint_t *new, *tmp, *next;

	if (!h)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	tmp = *h, next = tmp->next;
	if (!idx)
        {
                new->prev = NULL;
                if (*h != NULL)
                {
                        new->next = *h;
                        (*h)->prev = new;
                }
                *h = new;
                return (new);
        }
	while (tmp)
	{
		if (i == idx - 1)
		{
			new->next = tmp->next;
			new->prev = tmp;
			tmp->next = new;
			if (tmp->next)
				next->prev = new;
			return (new);
		}
		i++;
		tmp = tmp->next;
		if (tmp->next)
			next = next->next;
	}
	free(new);
	return (NULL);
}
