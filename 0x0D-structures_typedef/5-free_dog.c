#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free up memory.
 * @d:the struct to me freed.
 * Return: nothing.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
