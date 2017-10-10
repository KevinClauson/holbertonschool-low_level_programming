#include <stdlib.h>
#include "holberton.h"
/**
 * _strlen - finds length of string
 * @str: the string to find the length of.
 * Return: length.
 */
int _strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		++i;
	}
	return (i);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter..
 * @str: pointer.
 * Return: pointer to string.
 */
char *_strdup(char *str)
{
	int i, len;
	char *dup;

	if (str == NULL)
		return (NULL);

	len = _strlen(str);
	dup = (char *) malloc(len * sizeof(char) + 1);
	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = str[i];
	dup[i] = '\0';

	return (dup);
}
