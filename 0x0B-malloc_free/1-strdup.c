#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: char - string
 *
 * Return: pointer to a new string otherwise
 * NULL if str = NULL or
 * NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
	int index = 0, len = 0;
	char *strDup;

	if (str == NULL)
		return (NULL);

	while (*(str + len) != '\0')
		len++;

	strDup = (char *) malloc(sizeof(char) * (len + 1));

	if (strDup == NULL)
		return (NULL);

	while (*(str + index) != '\0')
	{
		*(strDup + index) = *(str + index);
		index++;
	}

	return (strDup);
}
