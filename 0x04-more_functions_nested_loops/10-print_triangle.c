#include "main.h"

/**
 * print_triangle - prints a triangle,
 * followed by a new line.
 * @size: the size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int step = 0;
	int space, ch;

	if (size > 0)
		while (step < size)
		{
			for (space = 0; space < (size - (step + 1)); space++)
			{
				_putchar(' ');
			}
			for (ch = 0; ch < (step + 1); ch++)
			{
				_putchar('#');
			}

			_putchar('\n');
			step++;
		}



	else
		_putchar('\n');
}
