#include "holberton.h"
/**
 * test_base - checks for numbers that squared would equal n..
 * @a: is n from sqrt function
 * @b: is the number we test.
 * Return: b if a match otherwise -1.
 */
int test_base(int a, int b)
{
	if (b * b == a)
		return (b);
	if (b * b < a)
		return (-1);
	return (test_base(a, b - 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to get square root of.
 * Return: the square root of n or -1 if no natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 1)
		return (-1);
	if (n == 1)
		return (1);
	return (test_base(n, n / 2));
}
