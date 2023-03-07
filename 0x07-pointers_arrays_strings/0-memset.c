#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: char pointer to the memory to be filled.
 * @b: char to fill the memory s.
 * @n: unsigned int.
 *
 * Return: char pointer memory.
 */
char *_memset(char *s, char b, unsigned int n)
{
        unsigned int i;
        i = 0;

        while (i < n)
        {
                s[i] = b;
                i++;
        }
        return (s);
}
