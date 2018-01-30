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
	size_t i, j, num, len;
	int t;

	if (array && size > 1)
	{
		len = 1;
		if (size % 3 == 0)
			num = size / 3;
		else
			num = (size / 3) + 1;
		while ((len * 3 + 1) <= num)
			len *= (len * 3) + 1;
		while (len >= 1)
		{
			for (i = len; i < size; i += 1)
			{
				t = array[i];

				for (j = i; j >= len && array[j - len] > t; j -= len)
				{
					array[j] = array[j - len];
				}
				array[j] = t;
			}
			print_array(array, size);
			len = (len - 1) / 3;
		}
	}
}
