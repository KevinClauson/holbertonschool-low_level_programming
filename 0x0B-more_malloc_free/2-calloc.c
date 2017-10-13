#include <stdlib.h>
#include "holberton.h"
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements in allocated array.
 * @size: size of the bytes.
 * Return: void pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
