#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * counting_sort - Entry point
 * @array: array to be sorted
 * @size: size of array;
 * Return: nothing
 */
void counting_sort(int *array, size_t size)
{
	size_t i;
	int max, *count, j, total, oldCount, *output;

	output = malloc(sizeof(int) * size);
	if (array && size > 1)
	{
		max = array[0];
		for (i = 0; i < size; ++i)
		{
			if (array[i] > max)
				max = array[i];
		}
		count = calloc((max + 1), sizeof(int));
		for (i = 0; i < size; ++i)
			count[array[i]] += 1;
		for(j = 0, total = 0, oldCount = 0; j < max + 1; ++j)
		{
			oldCount = count[j];
			total += oldCount;
			count[j] = total;
		}
		print_array(count, max+1);
		for (i = 0; i < size; ++i)
		{
			output[count[array[i]] - 1] = array[i];
			count[array[i]] += 1;
		}
		for (i = 0; i < size; ++i)
			array[i] = output[i];
		free(output);
		free(count);
	}
}
