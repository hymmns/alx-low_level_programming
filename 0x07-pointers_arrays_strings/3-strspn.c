#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: char pointer.
 * @accept: char pointer.
 *
 * Return: n number of bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, stop;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		stop = 1;
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				stop = 0;
				break;
			}
			j++;
		}
		if (stop)
			break;
	}
	return (i);
}
