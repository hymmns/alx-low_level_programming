#include "main.h"
/**
 * leet - encodes a string.
 * @s: pointer string.
 *
 * Return: char pointer to s.
 */
char *leet(char *s)
{
	int sIndex, len;
	char digits[] = "4433007711";
  char letters[] = "aAeEoOtTlL";

	sIndex = 0;
	while (s[sIndex] != '\0')
	{
		len = 0;
		while (len < 10)
		{
			if (letters[len] == s[sIndex])
			{
				s[sIndex] = digits[len];
			}
			len++;
		}
		sIndex++;
	}
	return (s);
}
