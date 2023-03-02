#include "main.h"
/**
 * _strncat - concatenates two string limit to n byte size.
 * @dest: destination string.
 * @src: source string.
 * @n: bytes size.
 *
 * Return: char pointer to destination.
 */
char *_strncat(char *dest, char *src, int n)
{
	int destIndex  = 0, srcIndex = 0;

	while (dest[destIndex])
	{
		destIndex++;
	}
	while (srcIndex < n)
	{
		dest[destIndex] = src[srcIndex];
		if (src[srcIndex] == '\0')
		{
			break;
		}
		srcIndex++;
		destIndex++;
	}
	return (dest);
}
