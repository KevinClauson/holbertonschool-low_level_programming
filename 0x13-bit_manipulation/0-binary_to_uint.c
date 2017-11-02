#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: is a string.
 * Return: an unsigned int or 0 if not a binary number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, num;

	if (b == NULL)
		return (0);
	num = 0;
	for (i = 0; b[i] != '\0'; ++i)
	{
		if (b[i] == '1')
		{
			num <<= 1;
			num |= 0x01;
		}
		else if (b[i] == '0')
		{
			num <<= 1;
		}
		else
		{
			return (0);
		}
	}
	return (num);
}
