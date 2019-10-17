#include "holberton.h"
#include <stdlib.h>

/**
 * cpy - check the code for Holberton School students.
 * @src: size of the lenght
 * @dest: string
 * @size: int
 *
 *Return: Always 0.
 */

char *cpy(char *src, char *dest, unsigned int size)
{
	unsigned int i;

	for (i = 0; i < size; i++)
		dest[i] = src[i];
	return (dest);
}

/**
 * _realloc - check the code for Holberton School students.
 * @ptr: size of the lenght
 * @old_size: int
 * @new_size: int
 *
 *Return: Always 0.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr2;

	if (new_size == old_size)
		return (ptr);
	if (!ptr)
	{
		ptr2 = malloc(new_size);
		if (!ptr2)
			return (NULL);
		free(ptr);
		return (ptr2);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	ptr2 = malloc(new_size);
	if (!ptr2)
		return (NULL);
	cpy(ptr, ptr2, old_size);
	free(ptr);
	return (ptr2);
}
