#include "holberton.h"
/**
 * check_palindrome - check if word is palindrome recursivly..
 * @s: string to check;
 * @start: starting index;
 * @len: ending index;
 * Return: 0 if not palindorme and 1 if it is.
 */
int check_palindrome(char *s, int start, int len)
{
	if (s[start] != s[len])
		return (0);
	if (start == len || start > len)
		return (1);
	return (check_palindrome(s, start + 1, len - 1));
}
/**
 * _strlen_recursion - get string length.
 * @s: string to get length of.
 * Return: 0 if empty string and length otherwise.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * is_palindrome - check if string is a palindrome.
 * @s: string to check
 * Return: returns 1 if a s is palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int len, t, start;

	start = 0;
	len = _strlen_recursion(s) - 1;
	if (len == 0)
		return (1);
	t = check_palindrome(s, start, len);
	if (t == 1)
		return (1);
	return (0);
}
