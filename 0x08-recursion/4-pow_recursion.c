#include "main.h"

/**
 * _pow_recursion - x raised to the power of y
 * @x: int base
 * @y: int power
 *
 * Return: int x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (x == 1 || y == 1)
		return (x);
	return (x * _pow_recursion(x, (y - 1)));
}
