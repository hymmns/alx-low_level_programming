#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: umber of times the character \ should be printed
 * Return: void.
 */
void print_diagonal(int n)
{
	int step, space;

	if (n > 0)
		for (step = 0; step < n; step++)
		{
			for (space = 0; space < step; space++)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');
		}


	else
		_putchar('\n');
}
