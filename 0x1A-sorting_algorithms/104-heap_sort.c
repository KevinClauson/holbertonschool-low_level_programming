#include "sort.h"




/**
 * heap_sort - Entry point
 * @array: array to be sorted
 * @size: size of array
 * Return: nothing
 */
void heap_sort(int *array, size_t size)
{
	size_t n = size, i = n/2, parent, child;
	int t;

	for (;;)
	{
		if (i > 0)
		{
			i--;
			t = array[i];
		}
		else
		{
			n--;
			if (n == 0) return;
			t = array[n];
			array[n] = array[0];
		}
		parent = i;
		child = i*2 + 1;
		while (child < n){
			if (child + 1 < n  &&  array[child + 1] > array[child])
				child++;
			if (array[child] > t)
			{
				array[parent] = array[child];
				parent = child;
				child = parent*2+1;
			}
			else
				break;
		}
		print_array(array, size);
		array[parent] = t;
	}
}
