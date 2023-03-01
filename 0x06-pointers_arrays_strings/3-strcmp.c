#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string
 * @s2: string
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
        int diff = 0, index = 0;

        while (diff == 0 && *(s1 + index) != '\0' && *(s2 + index) != '\0')
        {
                diff = *(s1 + index) - *(s2 + index);
                index++;
        }
        return (diff);
}
