#include "lists.h"

/**
 * pop_listint - frees a list of ints
 * @head: address of pointer to first node
 *
 * Return: void
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int value = 0;

	if (!head)
		return (value);

	temp = *head;
	value = temp->n;
	*head = temp->next;
	free(temp);
	return (value);
}
