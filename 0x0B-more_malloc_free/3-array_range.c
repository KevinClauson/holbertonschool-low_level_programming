#include <stdlib.h>
#include "holberton.h"
/**
 * array_range - that creates an array of integers.
 * @min: start of range
 * @max: end of range
 *
 * Return: pointer to new array.
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, j, range;

	if (min > max)
		return (NULL);
	range = (max - min) + 1;
	arr = malloc(range * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0, j = min; j <= max; ++i, ++j)
	{
		arr[i] = j;
	}
	return (arr);
}
