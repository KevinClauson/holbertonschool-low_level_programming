#include <stdio.h>

/**
 * main - print base 10 only use putchar \n.
 * Description: can't use a variable with type char.
 * Return: 0
 */

int main(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		putchar('0' + i);

		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}

	putchar('\n');

	return (0);
}
