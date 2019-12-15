#include "lists.h"

listint_t *rev_recursion(listint_t **head, listint_t *prev);

/**
 * reverse_listint - Reverse a listint_t list
 * @head: Head of the list
 *
 * Return: Pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	if (head == NULL)
		return (NULL);
	else
		return (rev_recursion(head, NULL));
}

/**
 * rev_recursion - Reverse a listint_t using recursion
 * @head: Head of the list
 * @prev: previous element
 *
 * Return: Pointer to the first node of the reversed list
 */
listint_t *rev_recursion(listint_t **head, listint_t *prev)
{
	listint_t *guard;

	if (*head != NULL)
	{
		guard = (*head);
		*head = (*head)->next;
		guard->next = prev;
		return (rev_recursion(head, guard));
	}
	*head = prev;
	return (prev);
}
