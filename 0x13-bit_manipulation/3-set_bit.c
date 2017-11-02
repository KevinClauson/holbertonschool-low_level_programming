#include "holberton.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: is an unsigned long that will have a bit changed to one at index.
 * @index: is the bit to change 0 numbering.
 * Return: 1 or 0 or -1 if error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i, num, temp;

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
	*n = *n | num;
	temp = *n;
	temp &= num;
	if (temp == num)
		return (1);
	else
		return (-1);
}
