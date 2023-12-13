#include "main.h"

/**
 * print_last_digit - prints and returns the last digit of a number.
 * @n: n - Integer
 *
 * Return: Integer.
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n = _abs(n);

	last_digit = n % 10;

	_putchar('0' + last_digit);

	return (last_digit);
}
