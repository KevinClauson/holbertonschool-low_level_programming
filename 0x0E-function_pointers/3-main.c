#include "3-calc.h"
/**
 * main - performs simple operations by passing functions as pointers.
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: 0 or 98 if too few arguments, 99 if wrong operator, 100 if div by 0
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator;

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	if (get_op_func(operator) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (num2 == 0 && (strcmp(operator, "/") == 0 || strcmp(operator, "%") == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", (get_op_func(operator)(num1, num2)));

	return (0);
}
