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

        while (*(dest + destIndex) != '\0')
                destIndex++;

        for (; srcIndex < n; srcIndex++)
        {
                if (*(src + srcIndex) == '\0')
                        break;

                *(dest + destIndex) = *(src + srcIndex);
                destIndex++;
        }
        return (dest);
}
