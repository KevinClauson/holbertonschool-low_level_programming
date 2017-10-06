#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * main - prints the number of arguments passed into it.
 * @argc: is number of args.
 * @argv: unused.
 * Return: Always 0.
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
