#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase.
 *
 * Return: void
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
		_putchar(alpha++);
	_putchar('\n');
}
