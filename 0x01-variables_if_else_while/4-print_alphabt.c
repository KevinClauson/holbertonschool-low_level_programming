#include <stdio.h>

/**
 * main - print alphabet in lowercase excluding e and q \n.
 * Description: can't use putchar more than twice.
 * Return: 0
 */

int main(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);

		letter++;
	}

	putchar('\n');

	return (0);
}
