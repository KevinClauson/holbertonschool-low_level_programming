#include "holberton.h"
/**
 * recursive_print - prints the elements out backwards.
 * @n: is an usinged long int.
 * Return: nothing.
 */
void recursive_print(unsigned long int n)
{
	if (n == 0)
		return;
	recursive_print(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	else if ((n & 1) == 0)
		_putchar('0');
}
/**
 * print_binary - prints the binary representation of a number.
 * @n: is an usinged long int.
 * Return: nothing.
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		recursive_print(n);
	}
}
