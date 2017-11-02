#include "holberton.h"
/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another.
 * @n: one of the two numbers to check how many bit changes required.
 * @m: same as n.
 * Return: number bit flips one would need to change one of the given numbers
 * to the other.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int temp, cp;
	unsigned int i, cnt;

	cp = n ^ m;
	cnt = 0;
	while (cp)
	{
		temp = 0;
		temp = cp & 1;
		if (temp == 1)
		{
			++cnt;
		}
		cp >>= 1;
	}
	return (cnt);
}
