#include "holberton.h"
#include <stdlib.h>

char *cpy(char *src, char *dest)
{
	unsigned int i;

	for(i = 0; src[i]; i++)
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

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		ptr2 = malloc(new_size);
		if (!ptr2)
			return (NULL);
		free(ptr);
		return (ptr2);
	}
	if (new_size == old_size)
		return (ptr);

	ptr2 = malloc(new_size);
	if (!ptr2)
		return(NULL);
	cpy(ptr,ptr2);
	free(ptr);
	return (ptr2);
}
