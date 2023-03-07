#include "main.h"
/**
 * _memcpy - function that copies memory area.
 *
 * @dest: destination.
 * @src: source.
 * @n: n bytes from memory.
 *
 * Return: char pointer destination
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
        unsigned int i;

        i = 0;

        for (; i < n; i++)
                *(dest + i) = *(src +i);
        return (dest);
}
