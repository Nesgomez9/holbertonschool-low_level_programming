#include "dog.h"

/**
 * inti_dog - check the code for Holberton School students.
 * @d: the struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the owner
 *
 * Return: Always 0.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
	return;
}
