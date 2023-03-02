#include "main.h"
/**
 * _strcat - concatenate two string.
 * @dest: destination string.
 * @src: source string.
 *
 * Return: char pointer to destination.
 */
char *_strcat(char *dest, char *src)
{
	int destIndex, srcIndex;

	destIndex = 0;
	while (dest[destIndex])
	{
		destIndex++;
	}
	srcIndex = 0;
	while (srcIndex >= 0)
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
