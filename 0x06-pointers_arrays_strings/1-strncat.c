#include "main.h"

/**
 * _strncat -  concatenates two strings
 * @dest: destination
 * @src: source
 *
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int destIndex = 0, srcIndex = 0;

	while (des[destIndex])
		destIndex++;
	while (srcIndex < n)
	{
		*(dest + destIndex) = *(src + srcIndex);
		if (src[srcIndex] == '\0')
			break;
		destIndex++;
		srcIndex++;
	}
	return (dest);
}
