#include "lists.h"

/**
 * quick_p - print before main function.
 * we use __attribute__((constructor)) in the header to do this.
 * Return: nothing.
 */
void quick_p(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
