#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from a range
 *
 * @min: minimum value of range
 * @max: maximum value of range
 *
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *ptr, var;

	if (min > max)
		return (NULL);

	ptr = malloc((max - min + 1) * sizeof(*ptr));

	if (ptr == NULL)
		return (NULL);

	for (var = 0; min + var <= max; var++)
		ptr[var] = min + var;

	return (ptr);
}
