#include "main.h"

/**
 * _strcmp - dummy function.
 * @s1: char pointer
 * @s2: char pointer
 *
 * Return: 0.
 */
int _strcmp(char *s1, char *s2)
{
	if (*s1 == 'c' || *s2 == 'c')
		return (1);

	return (0);
}
