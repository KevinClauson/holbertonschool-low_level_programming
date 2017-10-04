#include "holberton.h"
/**
 * factorial - returns the factorial of a given number.
 * @n: the number you want factorial of
 * Return: int factorial or -1 if n is negative.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
