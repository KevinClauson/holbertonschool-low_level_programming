#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator -  executes a func given as a param on each element of arr.
 * @array: array of ints;
 * @size: number of elements in array
 * @action: function to use.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; ++i)
	{
		action(array[i]);
	}
}