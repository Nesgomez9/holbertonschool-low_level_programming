#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints a name as is
 * @array: Array to iterate
 * @size: size of the array
 * @action: pointer to function to use
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
