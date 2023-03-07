#include "main.h"

/**
 * _strpbrk - searches a string
 * for any of a set of bytes.
 *
 * @s: char pointer.
 * @accept: char pointer.
 *
 * Return: char pointer to the bytes
 * or NULL if not found.
*/
char *_strpbrk(char *s, char *accept)
{
        int sIndex = 0, aIndex;
        while (s[sIndex] != '\0')
        {
                for (aIndex = 0; accept[aIndex] != '\0'; aIndex++)
                {
                        if (s[sIndex] == accept[aIndex])
                                return (s + sIndex);
                }
                sIndex++;
        }
        return ('\0');
}
