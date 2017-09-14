#include <stdio.h>

/**
 * main - print number compos that are unique\n.
 * Description: can't use a variable with type char.
 * Return: 0
 */

int main(void)
{
	int i, j, first, second, third, fourth;

	i = 0;
	j = 0;

	while (i < 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			first = i / 10;
			second = i % 10;
			third = j / 10;
			fourth = j % 10;
			putchar('0' + first);
			putchar('0' + second);
			putchar(' ');
			putchar('0' + third);
			putchar('0' + fourth);

			if (i < 98)
			{
				putchar(',');
				putchar(' ');
			}
			++j;
		}
		++i;
	}
	putchar('\n');
	return (0);
}
