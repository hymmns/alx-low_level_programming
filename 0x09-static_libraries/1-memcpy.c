#include "main.h"

/**
 * _memcpy - dummy function.
 * @dest: char pointer
 * @src: char pointer
 * @n: unsigned int
 *
 * Return: char pointer.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	if (*dest == 'c' || *src == 'c' || n == 0)
		return (src);

	return (dest);
}
