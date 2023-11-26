#include "function_pointers.h"

/**
 * int_index - searches for an int in an array
 *
 * @array: array of integers to search in
 * @size: size of array
 * @cmp: function used to compare values
 *
 * Return: index to integer if successful, -1 if else
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int var;

	if (array && cmp && size > 0)
	{
		for (var = 0; var < size; var++)
		{
			if (cmp(array[var]))
				return (var);
		}
	}

	return (-1);
}
