#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * Return: void
 */
void times_table(void)
{
	int row, col;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			int first_digit = ((row * col) / 10);
			int sec_digit = ((row * col) % 10);

			if (col > 0)
			{
				_putchar(',');
				_putchar(' ');
				if (first_digit == 0)
					_putchar(' ');
			}
			if ((row * col) <= 9)
			{
				_putchar('0' + sec_digit);
			}
			else
			{
				_putchar('0' + first_digit);
				_putchar('0' + sec_digit);

			}
		}
		_putchar('\n');
	}

}
