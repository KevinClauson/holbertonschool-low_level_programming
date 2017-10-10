#include <stdlib.h>
#include "holberton.h"
/**
 * free_grid -  frees a 2 dimensional grid.
 * @grid: double pointer to be freed;
 * @height: height of grid.
 *
 * Return: nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (height == 0 && grid != NULL)
	{
		free(grid);
	}
	else if (height != 0)
	{
		for (i = 0; i < height; ++i)
			free(grid[i]);

		free(grid);
	}
}
