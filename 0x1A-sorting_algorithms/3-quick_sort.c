#include "sort.h"

/**
 * swap - swap elements in array
 *
 * @a: element of array
 * @b: element of array
 *
 * Return: Nothing
 */
void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

/**
 * partition -  partition and repeat
 * @arr: array to be sort
 * @low: left side of sub array to sort
 * @high: right side of the sub array array
 * @size: size of array
 *
 * Return: the new index
 */
size_t partition(int *arr, int low, int high, size_t size)
{
	int pivot, i, j;

	pivot = arr[high];
	i = (low - 1);
	for (j = low; j <= high - 1; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	print_array(arr, size);
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

/**
 * sort - recursively divide and conquer
 * @arr: array to be sorted.
 * @low: left side of subarray.
 * @high: right side of subarray.
 * @size: size of array
 */
void sort(int *arr, int low, int high, size_t size)
{
	int num;

	if (low < high)
	{
		num = partition(arr, low, high, size);
		sort(arr, low, num - 1, size);
		sort(arr, num + 1, high, size);
	}
}

/**
 * quick_sort - sort an array quickly
 *
 * @array: array of ints
 * @size: size of array
 *
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
	if (array && size > 1)
	{
		sort(array, 0, size - 1, size);
	}
}
