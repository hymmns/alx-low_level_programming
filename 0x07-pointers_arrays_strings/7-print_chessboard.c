#include "main.h"

/**
 * print_chessboard - prints chessboard.
 * @a: char pointerr.
 *
 * Return: no return.
 */
void print_chessboard(char (*a)[8])
{
	unsigned int ind, j;

	for (ind = 0; ind < 8; ind++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[ind][j]);
		_putchar('\n');
	}
}
