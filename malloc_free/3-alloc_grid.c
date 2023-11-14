#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2-dimensional array with all elements initialized to 0
 *
 * @width: # of columns
 * @height: # of rows
 *
 * Return: pointer to 2d array if successful, NULL if else
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int var1 = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(height * sizeof(*ptr));

	if (ptr == NULL)
		return (NULL);

	for (; var1 < height; var1++)
	{
		int var2 = 0;
		int var3 = 0;

		ptr = malloc(width * sizeof(int));

		if (ptr[var1] == NULL)
		{
			for (; var2 < var1; var2++)
				free(ptr[var2]);

			free(ptr);

			return (NULL);
		}

		for (; var3 < width; var3++)
			ptr[var1][var3] = 0;
	}

	return (ptr);
}
