#include "lists.h"

/**
 * add_dnodeint - check the code for Holberton School students.
 * @head: the Head of the list
 * @n: The number of the list
 *
 * Return: The new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	new = malloc(sizeof(dlistint_t));
	tmp = *head;
	if (!new)
		return (NULL);

	new->n = n;
	if (!tmp)
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (new);
	}
	tmp->prev = new;
	new->prev = NULL;
	*head = new;
	new->next = tmp;
	return (new);
}
