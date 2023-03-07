#include "main.h"
/**
 * _strchr - locates a character
 * in a string.
 * @s: char pointer string.
 * @c: char character to locate.
 *
 * Return: char pointer first occurence.
*/
char *_strchr(char *s, char c)
{
        int ind = 0;

        while (s[ind] != '\0')
        {
                if (s[ind] == c)
                        return (s + ind);
                ind++;
        }
        if (s[ind] == c)
                return (s + ind);
                
                return ('\0');
}
