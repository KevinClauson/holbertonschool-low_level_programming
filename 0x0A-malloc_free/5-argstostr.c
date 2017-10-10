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
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of arguments.
 * @av: array of arguments.
 * Return: pointer to string or NULL if ac or av == NULL.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *arr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; ++i)
	{
		len += _strlen(av[i]) + 1;
	}

	arr = (char *) malloc(len * sizeof(char) + 1);

	if (arr == NULL)
		return (NULL);

	for (i = 0, k = 0; i < ac; ++i)
	{
		for (j = 0; av[i][j] != '\0'; ++j, ++k)
		{
			arr[k] = av[i][j];
		}
		arr[k] = '\n';
		++k;
	}
	++k;
	arr[k] = '\0';
	return (arr);
}
