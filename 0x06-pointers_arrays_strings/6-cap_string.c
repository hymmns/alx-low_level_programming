#include "main.h"

/**
 * cap_string - capitalize all words in a string.
 * @s: string
 *
 * Return: pointer to string.
 */
char *cap_string(char *s)
{
	int ind = 0, isLower, isSpec;
	char prev;

	while (*(s + ind))
	{
		isLower = *(s + ind) >= 97 && *(s + ind) <= 122;
		prev = ind > 0 ? *(s + (ind - 1)) : '\0';
		isSpec = prev == ' ' || prev == '\t' || prev == '\n'
			|| prev == ',' || prev == ';' || prev == '.'
			|| prev == '!' || prev == '?' || prev == '"'
			|| prev == '(' || prev == ')' || prev == '{'
			|| prev == '}';
		if (ind == 0 && isLower)
			*(s + ind) = *(s + ind) - 32;
		else
			if (isSpec && isLower)
				*(s + ind) = *(s + ind) - 32;
		ind++;
	}

	return (s);
}
