#include "main.h"

/**
 * more_numbers - prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 * Return: void.
 */
void more_numbers(void)
{
	int times = 1;
	char num;

	while (times <= 10)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar('0' + (num / 10));

			_putchar('0' + (num % 10));
		}
		times++;
		_putchar('\n');
	}
}
