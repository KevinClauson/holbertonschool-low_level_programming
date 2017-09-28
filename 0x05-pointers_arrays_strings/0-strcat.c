#include "holberton.h"
/**
 * _strcat - concat two strings.
 * @dest: this is the string that at the end of you will add src.
 * @src: the string to add to end of dest.
 *
 * Return: return pointer to the new string..
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; ++i)
		;
	for (j = 0; src[j] != '\0'; ++j, ++i)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';

	return (dest);
}
