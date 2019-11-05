#include "lists.h"

/**
 * get_nodeint_at_index - check the code for Holberton School students.
 *
 * @head: head
 * @index: indexx
 * Return: Always 0.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (i < index)
	{
		if (!temp)
			return (NULL);
		temp = temp->next;
		i++;
	}
	return (temp);
}
