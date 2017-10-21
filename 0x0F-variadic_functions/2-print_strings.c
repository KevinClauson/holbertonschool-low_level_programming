#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string that will sparate each input
 * @n: the number of arguments.
 * Return: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(args, char *));
		if (separator && (i < n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
