#include "main.h"
/**
 * leet - encodes a string.
 * @s: pointer to string.
 *
 * Return: char pointer to s.
 */
char *leet(char *s)
{
	int ind, len;
	char letters[] = "aAeEoOtTlL";
	char digits[] = "4433007711";
	
	ind = 0;
	while (s[ind] != '\0')
	{
		len = 0;
		while (len < 10)
		{
			if (letters[len] == s[ind])
			{
				s[ind] = digits[len];
			}
			len++;
		}
		ind++;
	}
	return (s);
}
