#include "holberton.h"
/**
 * _strchr - locates a characeter in a string.
 * if don't find then return pointer to null.
 * @s: string to search.
 * @c: the char to look for.
 * Return: pointer to c or to null if c not present.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		++s;
	}
	*s = '\0';
	return (s);
}
