#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - string length
 * @str: input string
 * Return: string length unsigned integer
 */
int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i] != '\0'; ++i)
		;
	return (i);
}
/**
 * str_cpy - copy string.
 * @str1: string to be copied to;
 * @str2: string to copy.
 * @len: length of string to copy.
 * Return: nothing.
 */
void str_cpy(char *str1, char *str2, unsigned int len)
{
	unsigned int i;

	for (i = 0; i < len; ++i)
	{
		str1[i] = str2[i];
	}
	str1[i] = '\0';
}
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog as float
 * @owner: name of owner
 * Return: a dog_t or NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int len_name, len_owner;
	dog_t *d;

	len_name = _strlen(name);
	len_owner = _strlen(owner);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = malloc(sizeof(char) * (len_name + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * (len_owner + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	str_cpy(d->name, name, len_name);
	str_cpy(d->owner, owner, len_owner);
	d->age = age;
	return (d);
}
