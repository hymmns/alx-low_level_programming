#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: int
 *
 * Return: void
 */
void print_times_table(int n)
{
	int multiplier, multiplicand;

	if (n > 15 || n < 0)
		return;

	for (multiplier = 0; multiplier < (n + 1); multiplier++)
	{
		for (multiplicand = 0; multiplicand < (n + 1); multiplicand++)
		{
			int result = multiplier * multiplicand;

			if (multiplicand > 0)
			{
				_putchar(',');
				_putchar(' ');
				if (result < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (result < 100)
				{
					_putchar(' ');
					_putchar(result / 10 + '0');
					_putchar(result % 10 + '0');
				}
				else if (result < 1000)
				{
					_putchar(result / 100 + '0');
					_putchar((result % 100) / 10 + '0');
					_putchar((result % 100) % 10 + '0');
				}
			}
			if (result < 10)
				_putchar(result + '0');

		}
		_putchar('\n');
	}
}
