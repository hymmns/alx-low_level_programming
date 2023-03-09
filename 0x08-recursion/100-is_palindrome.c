#include "main.h"

/**
 * len - returns the length.
 * @s: char string
 *
 * Return: int length of s.
 */

int len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + len(s + 1));
}

/**
 * helper - helper function
 * returns 1 if a string is a palindrome and 0 if not
 * @c: char constant string
 * @s: char string.
 * @len: int ending index
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int helper(char *c, char *s, int len)
{
	if (*s == '\0' || len == 0)
		return (1);
	if (*s == *(c + len))
		return (helper(c, s + 1, len - 1));
	else
		return (0);
	return (0);
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: char string
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	int s_len = len(s);

	if (s_len > 0)
		s_len--;
	return (helper(s, s, s_len));
}
