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

	while (*(s + index))
	{
		isLower = *(s + index) >= 97 && *(s + index) <= 122;
		prev = index > 0 ? *(s + (index - 1)) : '\0';
		isSpecialChar = prev == ' ' || prev == '.' || prev == '\n'
			|| prev == '\t' || prev == ',' || prev == ';'
			|| prev == '!' || prev == '?' || prev == '"'
			|| prev == '(' || prev == ')' || prev == '{'
			|| prev == '}';
		if (index == 0 && isLower)
			*(s + index) = *(s + index) - 32;
		else
			if (isSpecialChar && isLowerCase)
				*(s + index) = *(s + index) - 32;
		index++;
	}

	return (s);
}
