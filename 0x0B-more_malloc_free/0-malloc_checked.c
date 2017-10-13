#include <stdlib.h>
#include "holberton.h"
/**
 * malloc_checked - allocates memory using malloc.
 * @b: amount of memory to be allocated.
 * Return: pointer to allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *r;

	r = malloc(b);
	if (r == NULL)
		exit(98);
	return (r);
}
