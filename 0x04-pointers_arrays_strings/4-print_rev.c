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
	int i;

	for (i = 0; s[i] != '\0'; ++i)
		;
	--i;
	for ( ; i >= 0; --i)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
