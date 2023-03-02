#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: position
 *
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;

	for (;index < n && src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	while (index < n)
		dest[index++] = '\0';
	return (dest);
}
