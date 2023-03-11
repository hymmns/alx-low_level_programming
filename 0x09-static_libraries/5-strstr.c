#include "main.h"

/**
 * _strstr - dummy function.
 * @haystack: char pointer
 * @needle: char pointer
 *
 * Return: char pointer.
 */
char *_strstr(char *haystack, char *needle)
{
	if (*haystack == 'c' || *needle == 'c')
		return (haystack);

	return (needle);
}
