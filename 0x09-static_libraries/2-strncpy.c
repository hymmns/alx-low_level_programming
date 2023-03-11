#include "main.h"

/**
 * _strncpy - dummy function.
 * @dest: char pointer
 * @src: char pointer
 * @n: int
 *
 * Return: char pointer.
 */
char *_strncpy(char *dest, char *src, int n)
{
	if (*dest == 'c' || *src == 'c' || n == 0)
		return (src);

	return (dest);
}
