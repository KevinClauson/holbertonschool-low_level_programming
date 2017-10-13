#include <stdlib.h>
#include <limits.h>
#include "holberton.h"
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements in allocated array.
 * @size: size of the bytes.
 * Return: void pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (size >= UINT_MAX / nmemb || nmemb >= UINT_MAX / size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;
	return (ptr);
}
