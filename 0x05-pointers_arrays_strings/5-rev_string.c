#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0, ind = 0;

	while (s[len] != '\0')
		len++;

	char t[len];

	for (; ind < len; ind++)
		t[ind] = *(sValue + (len - (ind + 1)));

	*s = t;
}
