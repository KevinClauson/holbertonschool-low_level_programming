#include <stdio.h>
#include "holberton.h"

int _strlen(char *str)
{
	int i;

	for(i = 0; str[i] != '\0'; ++i)
		;
	return (i);
}

void move_str(char *r, int k, int size_r)
{
	int i;
	printf("YYYY r: %c, k is: %d, size_r: %d\n", r[k], k, size_r);
	for(i = 0; k < size_r; i++, k++)
	{
		r[i] = r[k];
	}
}

int test_size(char *n1, int l1, char *n2, int l2, char *r, int size_r)
{
	int i, j, temp, carry, k;

	carry = 0;
	r[size_r - 1] = '\0';
	for (i = l1 - 1, j = l2 - 1, k = size_r - 2; i >= 0 || j >= 0; --i, --j, --k)
	{
		if (i >=0 && j >= 0)
		{
			temp = (n1[i] - '0') + (n2[j] -'0') + carry;
			carry = 0;
			if (temp > 9)
			{
				temp %= 10;
				carry = 1;
			}
			r[k] = temp + '0';
		}
		else if (i >= 0)
		{
			temp = (n1[i] - '0') + carry;
			carry = 0;
			if (temp > 9)
			{
				temp %= 10;
				carry = 1;
			}
			r[k] = temp + '0';
			temp = 0;
		}
		else if (j >= 0)
		{
			temp = (n2[j] - '0') + carry;
			carry = 0;
			if (temp > 9)
			{
				temp %= 10;
				carry = 1;
			}
			r[k] = temp + '0';
			temp = 0;
		}
		else if (carry == 1)
		{
			r[k] = carry + '0';
			carry = 0;
		}
		else
			break;
	}
	if (k > 0 && carry == 1)
	{
		r[k] = '1';
		move_str(r, k, size_r);
		return (1);
	}
	else if (carry == 1 && k == 0)
	{
		r[k] = '1';
		return (1);
	}
	else
		return (0);
}

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, len_n1, len_n2, test;

	len_n1 = _strlen(n1);
	len_n2 = _strlen(n2);
	test = test_size(n1, len_n1, n2, len_n2, r, size_r);
	if (test == 0)
		return (0);
	else
		return (r);
}
