#include <stdio.h>

/**
 * main - print number compos that are unique\n.
 * Description: can't use a variable with type char.
 * Return: 0
 */

int main(void)
{
	int i, j, k;

	i = 0;
	j = 0;
	k = 0;

	while (i < 8)
	{
		j = i + 1;
		while (j < 9)
		{
			k = j + 1;

			while (k < 10)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);

				if (i < 7 || j < 8 || k < 9)
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			++j;
		}
		++i;
	}

	putchar('\n');

	return (0);
}
