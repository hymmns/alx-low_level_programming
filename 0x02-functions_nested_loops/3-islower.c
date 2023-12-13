#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: Character to check.
 *
 * Return: 1 if true, otherwise 0
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	return (0);
}
