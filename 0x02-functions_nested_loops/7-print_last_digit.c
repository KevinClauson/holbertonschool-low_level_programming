#include "holberton.h"

/**
 * print_last_digit - print the last digiti of num
 * @n: is the number that we will take and return its last digit.
 *
 * Return: an int that is the last digit.
*/

int print_last_digit(int n)
{
	int r;

	if (n >= 0)
		r = n % 10;
	else
		r = (-1 * n) % 10;

	_putchar(r + '0');
	return (r);
}
