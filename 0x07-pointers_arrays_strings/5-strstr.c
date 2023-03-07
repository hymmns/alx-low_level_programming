#include "main.h"
/**
 * _strstr - finds the first occurrence of the
 * substring needle in the string haystack.
 * @haystack: char pointer.
 * @needle: char pointer.
 *
 * Return: char pointer.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		j = i;
		for (k = 0; *(needle + k) != '\0'
			&& *(haystack + j) != '\0'
			&& *(haystack + j) == *(needle + k); k++, j++)
			;
		if (*(needle + k) == '\0')
			return (haystack + i);
	}
	if (*haystack == '\0')
		return (haystack);
	return (0);
}
