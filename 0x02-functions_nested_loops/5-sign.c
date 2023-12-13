#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: Number of the sign to be printed.
 *
 * Return: 1 if sign is greater than zero,
 * 0, if sign equals zero,
 * -1, if sign is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);

}
