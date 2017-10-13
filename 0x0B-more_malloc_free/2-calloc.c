#include <stdlib.h>
#include "holberton.h"
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements in allocated array.
 * @size: size of the bytes.
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; ++i)
	{
		ptr[i] = NULL;
	}
	return (ptr);
}
