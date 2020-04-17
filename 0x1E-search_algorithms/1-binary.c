#include "search_algos.h"
/**
 *binary_search - find a value in a sorted array with binary search
 *@array: array of integers
 *@size: size of array
 *@value: value to find in the array
 *
 *Return: index of value, -1 otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l, r, index, i;

	l = 0;
	r = size - 1;
	if (!array)
		return (-1);
	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			if (i != r)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		index = (l + r) / 2;
		if (array[index] < value)
			l = index + 1;
		else if (array[index] > value)
			r = index - 1;
		else if (array[index] == value)
			return (index);
	}
	return (-1);
}
