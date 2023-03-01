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

        while (*(src + index) != '\0' && index != n)
        {
                *(dest + index) = src[index];
                index++;
        }
        return (dest);
}
