#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer using given compare function.
 * @array: the array to be searched
 * @size: num of elements in array.
 * @cmp: comparison function to be perfomred on the elements of array.
 * Return: index of element if found else -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; ++i)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
