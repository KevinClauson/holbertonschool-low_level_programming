#include "holberton.h"
/**
 * _strlen - check the length of a string.
 * @s: string.
 * Return: length of string.
 */
int _strlen(char *s)
{
	int cnt;

	cnt = 0;
	while (*s++)
		++cnt;

	return (cnt);
}
