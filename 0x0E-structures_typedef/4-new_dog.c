#include "dog.h"
#include <stdlib.h>
/**
 * _strdup - Prints the array reverse
 * @str: string
 *
 * Return: Nothing
 */

char *_strdup(char *str)
{
	int i, size;
	char *dest;

	if (str == 0)
	{
		return (NULL);
	}
	for (size = 0; str[size] != 0; size++)
	{}
	dest = malloc((size + 1) * sizeof(char));
	if (dest == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		dest[i] = str[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - check the code for Holberton School students.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the owner
 *
 * Return: Always 0.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	d = malloc(sizeof(*d));
	char *ncpy, *ocpy;

	if(d)
	{
		if(name)
		{
			ncpy=_strdup(name);
			if(!ncpy)
			{
				free(ncpy);
				return(NULL);
			}
				(*d).name = name;
		}
		else
			return (NULL);
		(*d).age = age;
		if(name)
                {
                        ocpy=_strdup(owner);
			if(!ocpy)
			{
				free(ocpy);
				free(ncpy);
				return (NULL);
			}
                        (*d).owner = owner;
                }
                else
		{
			free(ncpy);
                        return (NULL);
		}
	}
	else
		return (NULL);
	return (d);
}
