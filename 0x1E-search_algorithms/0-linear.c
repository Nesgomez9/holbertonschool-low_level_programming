#include "search_algos.h"
/**
 *linear_search - search a value in a sorted array of integers
 *@array: array of integers
 *@size: size of the array
 *@value: value to find in the array
 *
 *Return: index of the value or -1 if not exists
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
