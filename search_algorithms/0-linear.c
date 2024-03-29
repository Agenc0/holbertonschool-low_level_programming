#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers via
 * linear search.
 *
 * @array: pointer to first element of the array to search in
 * @size: size of the array to search
 * @value: value to search for
 *
 * Return: # of index where value was found if successful,
 * -1 if else.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
