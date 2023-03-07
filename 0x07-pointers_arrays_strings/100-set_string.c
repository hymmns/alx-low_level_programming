#include "main.h"

/**
 * set_string - sets the value of a pointer to a char.
 * @s: char pointer to pointer.
 * @to: char pointer to string.
 *
 * Return: void (success).
 */
void set_string(char **s, char *to)
{
	*s = to;
}
