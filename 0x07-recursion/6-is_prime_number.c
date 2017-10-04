#include "holberton.h"
/**
 * test_prime - check if num is prime.
 * @a: number to test if prime
 * @b: odd number to test against coming up from 3
 * @c: the number b should go up to.
 * Return: Always 0.
 */
int test_prime(int a, int b, int c)
{
	if (b > c)
		return (1);
	if (a % b == 0)
		return (0);
	return (test_prime(a, b + 2, c));
}
/**
 * is_prime_number - check for prime numbers.
 * @n: number to be checked
 * Return: returns 1 if the input int is prime, otherwise return 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	if (n % 2 == 0)
		return (0);
	return (test_prime(n, 3, n / 2));
}
