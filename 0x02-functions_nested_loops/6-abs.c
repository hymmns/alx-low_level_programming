#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: Integer to compute.
 *
 * Return: Integer - Absolute value.
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
