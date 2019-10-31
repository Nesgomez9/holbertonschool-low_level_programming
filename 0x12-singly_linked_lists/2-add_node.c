#include <string.h>
#include "lists.h"
/**
 * _strlen - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * add_node - check the code for Holberton School students.
 *
 * @head: head
 * @str: string
 * Return: Always 0.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *s;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (0);

	s = strdup(str);
	new_node->str = s;
	new_node->len = _strlen(s);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
