#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t list
 * @head: Head of the list
 *
 * Description: Prints a listint_t list. It can prints lists with a loop
 * If the function fails, exit the program with status 98
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	long int add_a, add_b, n = 1;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		add_a = (long int)head;
		add_b = (long int)head->next;
		if (add_a - add_b <= 0)
		{
			printf("-> [%p] %d\n", (void *)head->next, (head->next)->n);
			return (n);
		}
		head = head->next;
		n++;
	}
	return (n - 1);
}
