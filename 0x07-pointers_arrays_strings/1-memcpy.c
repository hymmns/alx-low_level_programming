#include "main.h"
/**
 * _memcpy - fill memory with a constant byte.
 * @dest: destination.
 * @src: source.
 * @n: numbers of byte.
 *
 * Return: char pointer.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
