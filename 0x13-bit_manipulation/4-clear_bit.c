#include "holberton.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index..
 * @n: is an unsigned long that will have a bit changed to 0 at index.
 * @index: is the bit to change index is 0 numbering.
 * Return: 1 or 0 or -1 if error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i, num, temp, temp2;

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
	temp2 = num;
	num = ~num;
	*n = *n & num;
	temp = *n;
	temp &= temp2;
	if (temp == 0)
		return (1);
	else
		return (-1);
}
