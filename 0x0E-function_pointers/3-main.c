#include "3-calc.h"
/**
 * main - performs simple operations by passing functions as pointers.
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: 0 or 98 if too few arguments, 99 if wrong operator, 100 if div by 0
 */
int main(int argc, char *argv[])
{
	int n1, n2;
        char *op;

	if (argc < 4)
	{
		printf("Error\n");
		exit (98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	operator = argv[2];
	if (get_op_func(op) == NULL)
	{
		printf("Error\n");
		exit (99);
	}
	if (n2 == 0 && (strcmp(op,"/") == 0 || strcmp(op, "%") == 0))
	{
		printf("Error\n");
		exit (100);
	}
	printf("%d\n", (get_op_func(op)(n1, n2)));

	return (0);
}
