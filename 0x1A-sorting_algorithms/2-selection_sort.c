#include "sort.h"

/**
 * selection_sort - sort an array
 *
 * @array: aray of ints
 * @size: size of array
 *
 * Return: Nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, i_min;

	for (j = 0; j < size - 1; ++j)
	{
		i_min = j;
		for (i = j + 1; i < size; ++i)
		{
			if (array[i] < array[i_min])
				i_min = i;
		}
		if (i_min != j)
		{
			array[j] ^= array[i_min];
			array[i_min] ^= array[j];
			array[j] ^= array[i_min];
			print_array(array, size);
		}
	}
}
