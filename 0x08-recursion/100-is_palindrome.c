#include "main.h"
#include <stdio.h>

/**
 * is_even - checks if a given number is even
 * @num: int
 *
 * Return: 1 if num is even, otherwise 0.
 */
int is_even(int num)
{
	return (num % 2 == 0);
}

/**
 * helper - helper function
 * @s: char pointer
 * @len: int length of chars
 * @start: int start index
 * @end: int end index
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int helper(char *s, int len, int start, int end)
{
	if (s[start] != s[end])
		return (0);

	if (end - start == 1  && is_even(len))
		return (1);

	if (end - start == 2 && !is_even(len))
		return (1);

	return (helper(s, len, start + 1, end - 1));
}

/**
 * is_palindrome - 1 if a string is a palindrome and 0 if not.
 * @s: char pointer
 *
 * Return: int 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len == 0 || len == 1)
		return (1);

	return (helper(s, len,  0, len - 1));
}
