#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * main - print the file name.
 * @argc: is number of args.
 * @argv: array of args.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", argv[0]);

	return (0);
}
