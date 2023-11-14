#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2d array
 *
 * @grid: 2d array to free
 * @height: # of rows in grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int var = 0;

	for (; var < height; var++)
		free(grid[var]);

	free(grid);
}
