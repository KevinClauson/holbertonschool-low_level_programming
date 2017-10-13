#include <stdlib.h>
#include "holberton.h"
/**
 * _strlen - get length of string.
 * @str: string.
 * Return: length.
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		++i;
	}
	return (i);
}
/**
 * string_nconcat - concatenates two strings.
 * @s1: strging 1.
 * @s2: string 2.
 * @n: byets of s2 to include.
 * Return: pointer to a string or NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
		len1 = 0;
	else
		len1 = _strlen(s1);
	if (s2 == NULL)
		len2 = 0;
	else
		len2 = _strlen(s2);
	if (len1 == 0 && len2 == 0)
		return (NULL);
	if (len2 >= n)
		str = malloc(len1 + n + 1 * sizeof(char));
	else
		str = malloc(len2 + 1 * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len1; ++i)
		str[i] = s1[i];
	for (j = 0; j < n && s2[j] != '\0'; ++j, ++i)
		str[i] = s2[j];
	str[i] = '\0';
	return (str);
}
