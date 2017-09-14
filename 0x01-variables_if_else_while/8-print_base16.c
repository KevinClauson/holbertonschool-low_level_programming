#include <stdio.h>

/**
 * main - print hexadecimal base # \n.
 * Description: can't use putchar more than three times.
 * Return: 0
 */

int main(void)
{
	char num, num2;

	num = '0';
	num2 = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	while (num2 <= 'f')
	{
		putchar(num2);
		num2++;
	}

	putchar('\n');

	return (0);
}
