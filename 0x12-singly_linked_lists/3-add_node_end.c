#include "lists.h"
#include <string.h>

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
 * add_node_end - check the code for Holberton School students.
 *
 * @head: head
 * @str: string
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp = *head;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	if (!str)
	{
		new_node->str = 0;
		new_node->len = 0;
	}
	else
	{
		new_node->str = strdup(str);
		new_node->len = _strlen(str);
	}
	new_node->next = NULL;
	if (!temp)
		*head = new_node;
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
