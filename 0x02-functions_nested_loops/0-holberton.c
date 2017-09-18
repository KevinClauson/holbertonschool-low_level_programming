#include "holberton.h"

int main(void)
{
	char str[] = "holberton";
	int i;

	i = 0;
	while(str[i])
	{
		_putchar(str[i]);
		++i;
	}
	_putchar('\n');


	return (0);
}
