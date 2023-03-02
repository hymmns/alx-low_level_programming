#include "main.h"
/**
 * _strcmp - compare two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: negative value if string is less than the other.
 * positive value if string is greater than the other.
 * 0 if strings are equal.
 */
int _strcmp(char *s1, char *s2)
{
	int index = 0, diff;

	while (s1[index] == s2[index] && s1[index] != '\0')
	{
		index++;
	}
	diff = s1[index] - s2[index];
	return (diff);
}
