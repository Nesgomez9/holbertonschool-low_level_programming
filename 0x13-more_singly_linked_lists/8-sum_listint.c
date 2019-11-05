#include "lists.h"

/**
 * sum_listint - check the code for Holberton School students.
 *
 * @head: head
 * Return: Always 0.
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
