#include "sort.h"

/**
 * swap - swap the elements
 * @a: element to be swapped
 * @b: other elementt to be swapped
 *
 * Return: Nothing
 */
void swap(int *a, int *b)
{
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}

/**
 * bubble_sort - sort array
 * @array: array to be sorted
 * @size: length of array to be sorted
 *
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int flag;

	if (array)
	{
		for (i = 0; i < size - 1; ++i)
		{
			flag = 1;
			for (j = 0; j < size - i - 1; ++j)
			{
				if (array[j] > array[j + 1])
				{
					swap(&array[j], &array[j + 1]);
					print_array(array, size);
					flag = 0;
				}
			}
			if (flag)
				break;
		}
	}
}
