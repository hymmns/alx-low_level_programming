#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: char string.
 *
 * Return: int length of the string.
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (len);

	len += 1;

	return (len + _strlen_recursion(s + 1));
}
