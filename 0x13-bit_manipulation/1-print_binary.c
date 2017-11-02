#include "holberton.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: is an usinged long int.
 * Return: nothing.
 */
void print_binary(unsigned long int n)
{
	unsigned int i, temp, flag;

	if (n == 0)
		_putchar('0');
	else
	{
		while (n)
		{
			temp = 0;
			temp = n & 0x80000000;
			n <<= 1;

			if (temp == 0x80000000)
			{
				flag = 1;
				_putchar('1');
			}
			if (temp == 0 && flag == 1)
				_putchar('0');
		}
	}
}
