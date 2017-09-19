#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int i;
	long num1, num2, temp;

	num1 = 0;
	num2 = 1;

	for (i = 0; i < 50; ++i)
	{
		temp = (long) num1 + num2;
		if (i < 49)
			printf(" %ld,", temp);
		else
			printf(" %ld", temp);

		num1 = num2;
		num2 = temp;
	}
	printf("\n");
	return (0);
}
