#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * matrix of integers.
 * @a: square array of ints.
 * @size: size of array.
 * Return: nothing.
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	sum1 = sum2 = 0;
	for (i = 0; i < size; ++i)
	{
		for (j = 0; j < size; ++j)
		{
			if (i == j)
				sum1 += *a;
			if (j == size - 1 - i)
				sum2 += *a;
			++a;
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
