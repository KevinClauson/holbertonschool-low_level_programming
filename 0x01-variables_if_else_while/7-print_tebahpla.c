#include <stdio.h>

/**
 * main - print alphabet in lowercase in reverse.
 * Description: can't use putchar more than twice.
 * Return: 0
 */

int main(void)
{
	char letter;

	letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}

	putchar('\n');

	return (0);
}
