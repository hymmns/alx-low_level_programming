#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
        int destIndex = 0, srcIndex = 0;

        while (dest[destIndex])
                destIndex++;

        while (src[srcIndex])
        {
                dest[destIndex] = src[srcIndex];
                destIndex++;
                srcIndex++;
        }

        return (dest);
}
