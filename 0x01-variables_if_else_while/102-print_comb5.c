#include <stdio.h>

/**
 * main - print number compos that are unique\n.
 * Description: can't use a variable with type char.
 * Return: 0
 */

int main(void)
{
	int i;

	i = 0;

	while (i < 10000)
	{
		putchar('0' + (num / 1000));
		putchar('0' + ((num % 1000) / 100));
		putchar(' ');
		putchar('0' + ((num % 1000) / 10 % 10));
		putchar('0' + ((num % 1000) % 10));
		if (i < 9899)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
