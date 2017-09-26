#include "holberton.h"
/**
 * swap_int - swap two numbers.
 * @a: is a pointer to an int.
 * @b: is a pointer to an int.
 * Descrption: the ^ bitwise operator returns 0 when have two 1s.
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	*a = *b ^ *a;
	*b = *b ^ *a;
	*a = *b ^ *a;
}
