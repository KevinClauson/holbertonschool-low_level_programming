#include "holberton.h"
#include <stdio.h>

int _strlen(char *str)
{
	int i;

	for(i = 0; str[i] != '\0'; ++i)
		;
	return (i);
}

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; ++i)
		dest[i] = src[i];
	for ( ; i < n; ++i)
		dest[i] = '\0';
	return (dest);
}

void rev_arr(char *a, int n)
{
	int i, j, len_n1;
	char temp;

	for (i = 0, j = n - 1; i < j; ++i, --j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}


char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, len_n1, len_n2, len_r, temp1, temp2, carry, is_carry;
	char *rev_n1;
	char n1_w[100];
	char n2_w[100];
	char *ptr_n1;
	char *ptr_n2;

	len_n1 = _strlen(n1);
	len_n2 = _strlen(n2);
	if (len_n1 > size_r || len_n2 > size_r)
		return (0);
	ptr_n1 = _strncpy(n1_w, n1, len_n1);
	ptr_n2 = _strncpy(n2_w, n2, len_n2);
	rev_arr(n1_w, len_n1);
	rev_arr(n2_w, len_n2);

	is_carry = 0;
	carry = 0;
	for (i = 0; i < len_n1; ++i)
	{
		temp1 = (n1_w[i] - '0') + (n1_w[i] - '0') + carry;

		if (temp1 > 9)
		{
			is_carry = 1;
			temp1 %= 10;
			carry = 1;
			if(i == len_n1 - 1)
				len_n1+=1;
		}
		else
		{
			is_carry = 0;
			carry = 0;
		}
		r[i] = temp1 + '0';
	}
	rev_arr(r, len_n1);
	return (r);
}
