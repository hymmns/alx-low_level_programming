#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 *
 * Return: void.
 */
void jack_bauer(void)
{
	int mins, hr;

	for (hr = 0; hr < 24; hr++)
		for (mins = 0; mins < 60; mins++)
		{
			_putchar('0' + (hr / 10));
			_putchar('0' + (hr % 10));
			_putchar(':');
			_putchar('0' + (mins / 10));
			_putchar('0' + (mins % 10));

			_putchar('\n');
		}
}
