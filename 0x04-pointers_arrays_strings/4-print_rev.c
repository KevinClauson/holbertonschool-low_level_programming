#include "holberton.h"
/**
 * print_rev - print a string in reverse
 * @s: a pointer to a string of chars.
 * Discription: set ptr = to s, iterate through string s
 * then decrement from s back to ptr.
 * Return: void.
 */
void print_rev(char *s)
{
	char *ptr;

	ptr = s;
	while (*s++)
		;
	--s;
	while (s >= ptr)
	{
		_putchar(*s);
		--s;
	}
	_putchar('\n');
}
