#include "lists.h"

/**
 * insert_nodeint_at_index - check the code for Holberton School students.
 *
 * @head: head
 * @idx: indexx
 * @n: n
 * Return: Always 0.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp = *head;
	listint_t *n_node = malloc(sizeof(listint_t));

	if (!n_node)
		return (NULL);
	if (!head)
		return (NULL);
	n_node->n = n;
	if (!idx)
	{
		n_node->next = *head;
		*head = n_node;
		return (n_node);
	}
	while (temp)
	{
		if (i == idx - 1)
		{
			n_node->next = temp->next;
			temp->next = n_node;
			return (n_node);

		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}
