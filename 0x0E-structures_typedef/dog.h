#ifndef _PUTCHAR_H
#define _PUTCHAR_H
int _putchar(char c);
#endif

#ifndef MYDOG
#define MYDOG

/**
 * struct dog - check the code for Holberton School students.
 * @name: Name.
 * @age: Age.
 * @owner: Owner.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif

#ifndef _INIT_MYDOG_H
#define _INIT_MYDOG_H
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

#ifndef _PRINT_MYDOG_H
#define _PRINT_MYDOG_H
void print_dog(struct dog *d);
#endif

#ifndef _NEW_DOG_H
#define _NEW_DOG_H
dog_t *new_dog(char *name, float age, char *owner);
#endif
