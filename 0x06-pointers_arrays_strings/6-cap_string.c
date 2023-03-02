#include "main.h"

/**
 * cap_string - capitalize all words in a string.
 * @s: string
 *
 * Return: pointer to string.
 */
char *cap_string(char *s)
{
	int index = 0, isLowerCase, isSpecialChar;
	char prev;

	while (*(s + i))
	{
		isLowerCase = *(s + index) >= 97 && *(s + index) <= 122;
		prev = index > 0 ? *(s + (index - 1)) : '\0';
		isSpecialChar = prev == ' ' || prev == '\t' || prev == '\n'
			|| prev == ',' || prev == ';' || prev == '.'
			|| prev == '!' || prev == '?' || prev == '"'
			|| prev == '(' || prev == ')' || prev == '{'
			|| prev == '}';
		if (index == 0 && isLowerCase)
			*(s + index) = *(s + index) - 32;
		else
			if (isSpecialChar && isLowerCase)
				*(s + index) = *(s + index) - 32;
		index++;
	}

	return (s);
}

