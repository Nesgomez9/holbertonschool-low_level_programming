#include "lists.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: string to copy
 *
 * Return: Pointer
 */
char *_strdup(const char *str)
{
	int l = 0, i;
	char *s;

	if (str == NULL)
		return (0);

	while (*(str + l))
		l++;

	s = malloc(sizeof(char) * l + 1);

	if (s == 0)
		return (0);

	for (i = 0; i <= l; i++)
		*(s + i) = *(str + i);
	return (s);
}

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
 * add_node_end - check the code for Holberton School students.
 *
 * @head: head
 * @str: string
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	char *s;
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
		s = _strdup(str);
		if (!s)
			return (NULL);

		new_node->str = s;
		new_node->len = _strlen(s);
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
