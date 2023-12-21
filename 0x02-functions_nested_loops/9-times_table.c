#include "main.h"

/***/
void times_table()
{
	for (int row = 0; row < 10; row++)
	{
		for (int col = 0; col < 10; col++)
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
