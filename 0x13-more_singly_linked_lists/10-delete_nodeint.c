#include "lists.h"

/**
 * insert_nodeint_at_index - check the code for Holberton School students.
 *
 * @head: head
 * @idx: indexx
 * @n: n
 * Return: Always 0.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = *head;
	listint_t *temp2;

	if (!head && !*head)
		return (-1);
	if (!index && !*head)
	{
		head = NULL;
		return (1);
	}
	if (!index)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (temp)
	{
		if (i == index - 1)
		{
			temp2 = temp->next;
			temp->next = temp2->next;
			free (temp2);
			return (1);

		}
		temp = temp->next;
		i++;
	}
	return (-1);
}
