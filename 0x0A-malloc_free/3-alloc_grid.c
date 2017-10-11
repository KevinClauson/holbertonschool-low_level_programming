#include <stdlib.h>
#include "holberton.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer or NULL.
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = (int **)malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; ++i)
	{
		arr[i] = (int *) malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for ( ; i >= 0; --i)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
	}
	for (i = 0; i < height; ++i)
	{
		for (j = 0; j < width; ++j)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
