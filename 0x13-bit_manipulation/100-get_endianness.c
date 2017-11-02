#include "holberton.h"
/**
 * get_endianness - checks the if big endiann or little.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	int num;

	num = 1;
	num >>= 1;
	if (num == 0)
		return (1);
	else
		return (0);

}
