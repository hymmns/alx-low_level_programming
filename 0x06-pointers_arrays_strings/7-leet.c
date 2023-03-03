#include "main.h"
/**
 * leet - encodes a string.
 * @s: pointer to string.
 *
 * Return: char pointer.
 */
char *leet(char *s)
{
	int c1, c2;
	char letters[] = "aAeEoOtTlL";
	char nums[] = "4433007711";

	s_count = 0;
	while (s[c1] != '\0')
	{
		c2 = 0;
		while (c2 < 10)
		{
			if (letters[c2] == s[c1])
			{
				s[c1] = nums[c2];
			}
			c2++;
		}
		c1++;
	}
	return (s);
}
