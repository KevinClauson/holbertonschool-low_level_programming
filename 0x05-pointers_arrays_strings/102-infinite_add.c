#include <stdio.h>
#include "holberton.h"
/**
 * _strlen - get length of string
 * @str: string.
 * Return: length.
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		;
	return (i);
}
/**
 * k_strncpy - copy string.
 * @dest: the array to be copied to.
 * @src: the string to be copied.
 * @n: length of string.
 * Return: nothing.
 */
void k_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; ++i)
		dest[i] = src[i];
	for ( ; i < n; ++i)
		dest[i] = '\0';
}
/**
 * rev_arr - reverses a string.
 * @a: string to be rev.
 * @n: length of string.
 * Return: nothing.
 */
void rev_arr(char *a, int n)
{
	int i, j;
	char temp;

	for (i = 0, j = n - 1; i < j; ++i, --j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
	for (i = n; i < 100; ++i)
		a[i] = '0';
}
/**
 * infinite_add - add to long strings of numbers..
 * @n1: string to add.
 * @n2: string to add.
 * @r: buffer to create output string.
 * @size_r: size of buffer.
 * Return: string that is the sum of other two..
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, len_n1, len_n2, temp1, carry, is_carry;
	char n1_w[100], n2_w[100];

	len_n1 = _strlen(n1);
	len_n2 = _strlen(n2);
	if (len_n1 > size_r || len_n2 > size_r)
		return (0);
	k_strncpy(n1_w, n1, len_n1);
	k_strncpy(n2_w, n2, len_n2);
	rev_arr(n1_w, len_n1);
	rev_arr(n2_w, len_n2);

	is_carry = 0;
	carry = 0;
	for (i = 0; i < len_n1; ++i)
	{
		temp1 = (n1_w[i] - '0') + (n2_w[i] - '0') + carry;
		if (temp1 > 9)
		{
			is_carry = 1;
			temp1 %= 10;
			carry = 1;
		}
		else
		{
			is_carry = 0;
			carry = 0;
		}
		r[i] = temp1 + '0';
		if (i == len_n1 - 1 && is_carry == 1)
			r[++i] = '1';
	}
	if (i >= size_r)
		return (0);
	if (is_carry == 1)
		rev_arr(r, len_n2 + 1);
	else
		rev_arr(r, len_n2);
	return (r);
}
