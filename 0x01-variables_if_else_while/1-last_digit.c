#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - generates random # and prints out the # and last digit
 * Description: it also adds if last digit is == 0 or greater than 6
 * Return: 0.
 */

int main(void)
{
	int n;
	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	num = (n % 10);

	printf("Last digit of %d is %d", n, num);

	if (num > 5)
		printf(" and is greater than 5\n");
	else if (num == 0)
		printf(" and is 0\n");
	else
		printf(" and is less than 6 and not 0\n");
	return (0);
}
