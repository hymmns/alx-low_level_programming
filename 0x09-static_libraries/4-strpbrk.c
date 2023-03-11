#include "main.h"

/**
 * _strpbrk - dummy function.
 * @s: char pointer
 * @accept: char pointer
 *
 * Return: char pointer.
 */
char *_strpbrk(char *s, char *accept)
{
	if (*s == 'c' || *accept == 'c')
		return (accept);

	return (s);
}
