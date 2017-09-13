/**
 * main - Prints a message to standard error.
 * Description: prints to the standard error
 * Return: 1.
*/
#include <stdio.h>
#include <unistd.h>

int main(void)
{
	write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 60 );
	return (1);
}
