#include <stdio.h>

/**
 * main - print alphabet in lowercase followed by \n.
 * Description: can't use putchar more than twice.
 * Return: 0
 */

int main(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
