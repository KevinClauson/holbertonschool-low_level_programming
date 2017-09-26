#include "holberton.h"
/**
 * _puts - printf out string using putchar.
 * @str: string to print
 * Return: void.
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
