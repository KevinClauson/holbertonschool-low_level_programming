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
	int temp;

	if (array && size > 1)
	{
		len = 1;
		if (size % 3 == 0)
			num = size / 3;
		else
			num = (size / 3) + 1;
		while (len < num)
			len *= (len * 3) + 1;
		while (len >= 1)
		{
			for (i = len; i < size; i += 1)
			{
				temp = array[i];

				for (j = i; j >= len && array[j - len] > temp; j -= len)
				{
					array[j] = array[j - len];
				}
				array[j] = temp;
			}
			print_array(array, size);
			len /= 3;
		}
	}
}
