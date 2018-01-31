#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void TopDownMerge(int A[], size_t iBegin, size_t iMiddle, size_t iEnd, int B[])
{
	size_t i, j, k;

	i = iBegin, j = iMiddle;
/*
	for (i = iBegin; i < iEnd; ++i)
		printf("%d ", A[i]);
*/
	for (k = iBegin; k < iEnd; k++)
	{
		if (i < iMiddle && (j >= iEnd || A[i] <= A[j]))
		{
			/*printf("LEFT: %d\n", A[i]);*/
			B[k] = A[i];
			i = i + 1;
		}
		else
		{
			/*printf("Right: %d\n", A[j]);*/
			B[k] = A[j];
			j = j + 1;
		}
	}
}

void TopDownSplitMerge(int B[], size_t iBegin, size_t iEnd, int A[])
{
	size_t iMiddle, i;

	if(iEnd - iBegin < 2)
		return;
	iMiddle = (iEnd + iBegin) / 2;
	TopDownSplitMerge(A, iBegin,  iMiddle, B);
	TopDownSplitMerge(A, iMiddle,    iEnd, B);
	printf("Merging...\n");
	printf("[left]: %d", A[iBegin]);
	for (i = iBegin + 1; i < iMiddle; ++i)
		printf(", %d", A[i]);
	printf("\n");
	printf("[right]: %d", A[iMiddle]);
	for (i = iMiddle + 1; i < iEnd; ++i)
		printf(", %d", A[i]);
	printf("\n");
	TopDownMerge(B, iBegin, iMiddle, iEnd, A);
	printf("[Done]: %d", A[iBegin]);
	for (i = iBegin + 1; i < iEnd; ++i)
	{
		printf(", %d", A[i]);
	}
	printf("\n");
}

/**
 * copy_array - copy array
 * @A: array to copy from
 * @iBegin: startint point of copy
 * @iEnd: ending point of copy
 * @B: array to copy to
 * Return: nothing
 */
void copy_array(int A[], size_t iBegin, size_t iEnd, int B[])
{
	size_t k;
	for(k = iBegin; k < iEnd; k++)
		B[k] = A[k];
}

/**
 * top_down_merge_sort - merge
 * @A: array
 * @B: array
 * @n: size
 *
 * Return: nothing
 */
void top_down_merge_sort(int A[], int B[], size_t n)
{
	copy_array(A, 0, n, B);
	TopDownSplitMerge(B, 0, n, A);
}



/**
 * merge_sort - implement merge sort
 * @array: array to be sorted
 * @size: len of array
 * Return: nothing
 */
void merge_sort(int *array, size_t size)
{
	int *B;

	B = malloc(sizeof(int) * size);
	top_down_merge_sort(array, B, size);
	free(B);
}
