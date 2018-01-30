#include "sort.h"


/**
 * shell_sort - sort the array
 *
 * @array: array
 * @size: size of array
 *
 * Return: Nothing
 */
void shell_sort(int *array, size_t size)
{
	size_t i, j, gap;
	int t;

	if (array && size > 1)
	{
		gap = 1;
		while (((gap * 3) + 1) < size)
			gap = (gap * 3) + 1;
		while (gap >= 1)
		{
			for (i = gap; i < size; i += 1)
			{
				t = array[i];

				for (j = i; j >= gap && array[j - gap] > t; j -= gap)
				{
					array[j] = array[j - gap];
				}
				array[j] = t;
			}
			print_array(array, size);
			gap = (gap - 1) / 3;
		}
	}
}
