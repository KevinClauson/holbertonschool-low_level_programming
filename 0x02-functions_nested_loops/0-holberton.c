#include "holberton.h"

/**
 * main - prints out holberton char by char.
 * Description: uses the holbertong header file
 * that contains the function _putchar
 * Return: 0.
*/


int main(void)
{
	char str[] = "holberton";
	int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		++i;
	}
	_putchar('\n');

	return (0);
}
