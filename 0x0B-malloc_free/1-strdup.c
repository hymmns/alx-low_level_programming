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
	char *strDup = (char *) malloc(sizeof(char));
	int index = 0;

	if (str == NULL || strDup == NULL)
		return (NULL);

	while (*(str + index) != '\0')
	{
		*(strDup + index) = *(str + index);
		index++;
	}

	return (strDup);
}
