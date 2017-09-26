#include <stdio.h>
#include "holberton.h"
/**
 * print_array - print out array with commas..
 * @a: is the array of ints;
 * @n: is the number of elements in array.
 * Return: void.
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	for ( ; i < n; ++i)
	{
		if (i < n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
	}
}
