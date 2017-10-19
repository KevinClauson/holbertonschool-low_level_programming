#include "function_pointers.h"
/**
 * print_name - take in a string and a function and call the function.
 * @name: string to be printed.
 * @f: function to be used to print string.
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
