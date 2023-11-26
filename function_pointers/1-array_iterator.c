#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function through every element
 * of a given array
 *
 * @array: array to execute on
 * @size: size of the array
 * @action: function to execute
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t var;

	if (array && action)
	{
		for (var = 0; var < size; var++)
			action(array[var]);
	}
}
