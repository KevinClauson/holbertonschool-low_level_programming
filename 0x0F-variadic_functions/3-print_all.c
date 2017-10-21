#include "variadic_functions.h"
/**
 * num_args - counts the number of arguments.
 * @s: the string that tells you nuber of args and type.
 * Return: number of args to be printed.
 */
int num_args(const char * const s)
{
	int i, arg;

	i = arg = 0;
	while (s[i])
	{
		switch (s[i])
		{
		case 'i':
			++arg;
			break;
		case 's':
			++arg;
			break;
		case 'f':
			++arg;
			break;
		case 'c':
			++arg;
			break;
		}
		++i;
	}
	return (arg);
}
/**
 * print_all - a function that prints anything.
 * @format: gives you the format of the elements to be printed as well as junk
 * values.
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	int flag, temp, i, arg_count;
	va_list ap;
	char *s;

	va_start(ap, format);
	i = temp = arg_count = 0;
	arg_count = num_args(format);
	while (format && format[i] != '\0')
	{
		flag = 1;
		switch (format[i++])
		{
		case 's':              /* string */
			s = va_arg(ap, char *);
			if (s == NULL)
			{
				printf("(nil)");
				++temp;
				break;
			}
			printf("%s", s);
			++temp;
			break;
		case 'i':              /* int */
			printf("%d", va_arg(ap, int));
			++temp;
			break;
		case 'c':              /* char */
			printf("%c", (char) va_arg(ap, int));
			++temp;
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			++temp; break;
		default:
			flag = 0;
			break;
		}
		if (flag == 1 && temp < arg_count)
			printf(", ");
	}
	printf("\n");
	va_end(ap);
}
