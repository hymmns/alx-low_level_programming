#include "main.h"

/**
 * _memset - dummy function.
 * @s: char pointer
 * @b: char
 * @n: unsigned int
 *
 * Return: char pointer.
 */
char *_memset(char *s, char b, unsigned int n)
{
	if (*s == 'c' || b == 'c' || n == 0)
		return (s);

	return (s);
}
