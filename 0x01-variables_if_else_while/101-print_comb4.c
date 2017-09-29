#include <stdio.h>

/**
 * main - print number compos that are unique\n.
 * Description: can't use a variable with type char.
 * Return: 0
 */

int main(void)
{
	int i, j, k, m;

	i = 0;
	j = 0;
	k = 0;
	m = 0;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			k = 0;

			while (k < 10)
			{
				m = j + 1;

				while (m < 10)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar(' ');
					putchar('0' + k);
					putchar('0' + m);

					if (i < 9 || j < 9 || k < 9)
					{
						putchar(',');
						putchar(' ');
					}
					++m;
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
