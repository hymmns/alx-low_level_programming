#include "main.h"
/**
 * _strchr - locates a character in a string.
 *
 * @s: char pointer string.
 * @c: char character to locate.
 *
 * Return: char pointer first occurence of charatcer 
   or null if not found
*/
char *_strchr(char *s, char c)
{
        int ind = 0;

        if (s[ind] == c)
                return (s + ind);

        while (s[ind] != '\0')
        {
                if (s[ind] == c)
                        return (s + ind);
                ind++;
        }

        return ('\0');
}
