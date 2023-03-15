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
	char *strConcat;
	int s1Len = 0, s2Len = 0;

	if (s1 != NULL)
		while (*(s1 + s1Len) != '\0')
			s1Len++;

	if (s2 != NULL)
		while (*(s2 + s2Len) != '\0')
			s2Len++;

	strConcat = (char *) malloc(sizeof(char) * (s1Len + s2Len));

	if (strConcat == NULL)
		return (NULL);

	s1Len = 0;
	s2Len = 0;

	if (s1 != NULL)
		while (*(s1 + s1Len) != '\0')
		{
			*(strConcat + s1Len) = *(s1 + s1Len);
			s1Len++;
		}
	if (s2 != NULL)
		while (*(s2 + s2Len) != '\0')
		{
			*(strConcat + s1Len) = *(s2 + s2Len);
			s2Len++;
			s1Len++;
		}

	return (strConcat);
}
