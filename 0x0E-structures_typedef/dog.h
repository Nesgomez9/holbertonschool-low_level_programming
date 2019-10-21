#ifndef _PUTCHAR_H
#define _PUTCHAR_H
int _putchar(char c);
#endif

#ifndef DOGGY
#define DOGGY
/**
 * struct dog - Create a dog
 * @name: The name of the dog
 * @age: The age of the
 * @owner: The owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif

#ifndef _INIT_DOG_H
#define _INIT_DOG_H
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

#ifndef _PRINT_DOG_H
#define _PRINT_DOG_H
void print_dog(struct dog *d);
#endif
