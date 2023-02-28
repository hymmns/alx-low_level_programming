#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0, ind = 0;
	char sValue = *s;

	while (sValue[len] != '\0')
		len++;

	char str[len];

	for (; ind < len; ind++)
		str[ind] = *(sValue + (len - (ind + 1)));

	char *strPointer = &str;

	*s = *strPointer;
}
