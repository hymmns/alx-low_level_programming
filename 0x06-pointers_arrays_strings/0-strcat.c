#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: char pointer
 */

char *_strcat(char *dest, char *src)
{
        int destIndex = 0, srcIndex = 0;

        while (dest[destIndex])
                destIndex++;
        while (src[srcIndex] >= 0)
        {
                dest[destIndex] = src[srcIndex];
		if (src[srcIndex] == '\0')
			break;
                destIndex++;
                srcIndex++;
        }
        return (dest);
}
