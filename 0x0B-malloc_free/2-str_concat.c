#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: char - first string.
 * @s2: char - second string.
 *
 * Return: char pointer to a newly allocated space in memory
 * which contains the contents of s1 and s2 otherwise
 * NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *strConcat = (char *) malloc(sizeof(char));
	int s1Ind = 0, s2Ind = 0;

	if (s1 == NULL || s2 == NULL || strConcat == NULL)
		return (NULL);

	while (*(s1 + s1Ind) != '\0')
	{
		*(strConcat + s1Ind) = *(s1 + s1Ind);
		s1Ind++;
	}

	while (*(s2 + s2Ind) != '\0')
	{
		*(strConcat + s1Ind) = *(s2 + s2Ind);
		s2Ind++;
		s1Ind++;
	}

	return (strConcat);
}
