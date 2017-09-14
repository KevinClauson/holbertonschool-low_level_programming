#include <stdio.h>

/**
 * main - print base 10 only use putchar \n.
 * Description: can't use a variable with type char.
 * Return: 0
 */

int main(void)
{
	int i, j;

	i = 0;
	j = 0;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			putchar('0' + i);
			putchar('0' + j);

			if (i < 9 || j < 9)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		++i;
	}

	putchar('\n');

	return (0);
}
