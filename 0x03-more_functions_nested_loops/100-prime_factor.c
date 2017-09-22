#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	long i, num;

	num = 612852475143;

	for (i = 3; i < num; i+=2)
	{
		if (num % i == 0)
		{
			num /= i;
		}
	}
	printf("%ld\n", num);

	return (0);
}
