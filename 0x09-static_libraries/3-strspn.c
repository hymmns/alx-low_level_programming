#include "main.h"

/**
 * _strspn - dummy function.
 * @s: char pointer
 * @accept: char pointer
 *
 * Return: 1.
 */
unsigned int _strspn(char *s, char *accept)
{
	if (*s == 'c' || *accept == 'c')
		return (0);

	return (1);
}
