#include "variadic_functions.h"
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
				++temp; break;
			}
			printf("%s", s);
			++temp; break;
		case 'i':              /* int */
			printf("%d", va_arg(ap, int));
			++temp; break;
		case 'c':              /* char */
			printf("%c", (char) va_arg(ap, int));
			++temp; break;
		case 'f':
			printf("%f", va_arg(ap, double));
			++temp; break;
		default:
			flag = 0; break;
		}
		if (flag == 1 && format[i] != '\0')
			printf(", ");
	}
	printf("\n");
	va_end(ap);
}
