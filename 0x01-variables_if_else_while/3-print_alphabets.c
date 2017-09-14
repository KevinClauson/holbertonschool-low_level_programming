#include <stdio.h>

/**
 * main - print alphabets in both lowercase and uppercase \n.
 * Description: can't use putchar more than three times.
 * Return: 0
 */

int main(void)
{
	char letter, upper;

	letter = 'a';
	upper = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}

	putchar('\n');

	return (0);
}
