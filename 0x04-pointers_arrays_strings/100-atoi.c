#include "holberton.h"
/**
 * _atoi -  convert a string to an integer.
 * @s: the string to be converted.
 * Return: void.
 */
int _atoi(char *s)
{
	int num, i, is_num, one;

	num = is_num = 0;
	one = 1;
	for (i = 0; s[i] != '\0'; ++i)
	{
		if ((s[i] < '0' || s[i] > '9') && is_num == 1)
			break;
		if (s[i] == '-' && is_num == 0)
		{
			one *= -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			is_num = 1;
			num *= 10;
			num += s[i] - '0';
		}
	}
	if (is_num == 0)
		return (0);
	num *= one;
	return (num);
}
