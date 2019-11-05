#include <string.h>
#include "lists.h"
/**
 * _strlen - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * add_nodeint - check the code for Holberton School students.
 *
 * @head: head
 * @n: string
 * Return: Always 0.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (0);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
