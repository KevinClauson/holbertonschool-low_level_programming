#include "variadic_functions.h"

int num_args(const char * const s)
{
	int i, arg;

	i = arg = 0;
	while(s[i])
	{
		if (s[i] == 'i' || s[i] == 's' || s[i] == 'f' || s[i] == 'c')
			++arg;
		++i;
	}
	return (arg);
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	int d, flag, temp, i, arg_count;
	char c, *s;
	float f;
	va_list ap;

	va_start(ap, format);
	i = temp = arg_count = 0;

	arg_count = num_args(format);
	i = 0;
	while (format && format[i] != '\0')
	{
		flag = 1;
		switch (format[i])
		{
		case 's':              /* string */
			s = va_arg(ap, char *);
			printf("%s", s);
			++temp;
			break;
		case 'i':              /* int */
			d = va_arg(ap, int);
			printf("%d", d);
			++temp;
			break;
		case 'c':              /* char */
			c = (char) va_arg(ap, int);
			printf("%c", c);
			++temp;
			break;
		case 'f':
			f = va_arg(ap, double);
			printf("%f", f);
			++temp;
			break;
		default:
			flag = 0;
			break;
		}
		if(flag == 1 && temp < arg_count)
			printf(", ");
		++i;
	}
	printf("\n");
	va_end(ap);
}
