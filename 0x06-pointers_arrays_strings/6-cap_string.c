#include "main.h"

/**
 * cap_string -  capitalizes all words of a string
 * @str: string
 *
 * Return: char
 */

char *cap_string(char *str)
{
        int index = 0;
        char prev;

        while (*(str + index) != '\0')
        {
                prev = index - 1;
                if(*(str + index) >= 97 && *(str + index) <= 122 && (*(str + prev) == ' ' || *(str + prev) == '.' || *(str + prev) == '\n' || *(str + prev) == '\t' || *(str + prev) == ',' || *(str + prev) == ';' || *(str + prev) == '.' ||  *(str + prev) == '!' ||  *(str + prev) == '?' ||  *(str + prev) == '"' ||  *(str + prev) == '(' ||  *(str + prev) == ')' ||  *(str + prev) == '{' || *(str + prev) == '}'))
                        *(str + index) = str[index] - 32;
                index++;
        }
        return (str);
}
