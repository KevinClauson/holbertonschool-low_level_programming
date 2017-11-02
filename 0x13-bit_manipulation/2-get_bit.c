#include "holberton.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: is an unsigned long that will checked if has 1/0 at index.
 * @index: is the bit to be returned.
 * Return: 1 or 0 or -1 if error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i, num;

	if (index > 32)
		return (-1);

	num = 1;
	i = 0;
	if (n == 0)
		return (0);
	while (i <= index)
	{
		if (i > 0)
			num *= 2;
		++i;
	}
	n = n & num;
	if (n == num)
		return (1);
	else
		return (0);
}
