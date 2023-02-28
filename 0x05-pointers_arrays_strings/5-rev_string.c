#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0, ind;
	char sec, strt;

	while (s[len] != '\0')
		len++;

	len = len - 1;
	ind = len / 2;
	while (sec >= 0)
	{
		strt = s[len - ind];
		sec = s[ind];
		s[ind] = strt;
		s[len - ind] = sec;
		ind--;
	}
}
