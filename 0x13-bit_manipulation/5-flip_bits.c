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
	unsigned long int temp;
	unsigned int i, cnt;

	n ^= m;
	cnt = i = 0;
	while (i < 32)
	{
		temp = 0;
		temp = n & 0x80000000;
		n <<= 1;
		if (temp == 0x80000000)
		{
			++cnt;
		}
		++i;
	}
	return (cnt);
}
