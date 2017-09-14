#include <stdio.h>

/**
 * main - numbers 0 to 9 \n.
 * Description: include a new line..
 * Return: 0
 */

int main(void)
{
	int n;

	n = 0;

	while (n < 10)
	{
		printf("%d", n++);
	}

	printf("\n");

	return (0);
}
