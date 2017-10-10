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
 * str_concat - concatenates two strings.
 * @s1: pointer to string.
 * @s2: point to other string.
 * Return: pointer to concat string and NULL if fail.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2;
	char *cat;

	if (s1 == NULL)
		len1 = 0;
	else
		len1 = _strlen(s1);
	if (s2 == NULL)
		len2 = 0;
	else
		len2 = _strlen(s2);

	cat = (char *) malloc((len1 + len2) * sizeof(char) + 1);
	if (cat == NULL)
		return (NULL);

	for (i = 0; i < len1; ++i)
		cat[i] = s1[i];
	for (j = 0; j < len2; ++i, ++j)
		cat[i] = s2[j];
	cat[i] = '\0';

	return (cat);
}
