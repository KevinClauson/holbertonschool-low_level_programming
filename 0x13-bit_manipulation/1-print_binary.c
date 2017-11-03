#include "holberton.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: is an usinged long int.
 * Return: nothing.
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int i, flag;

	if (n == 0)
		_putchar('0');
	else
	{
		i = flag = 0;
		while (i < 32)
		{
			temp = 0;
			temp = n & 0x80000000;

			if (temp == 0x80000000)
			{
				flag = 1;
				_putchar('1');
			}
			if (temp == 0 && flag == 1)
				_putchar('0');
			n <<= 1;
			++i;
		}
	}
}
