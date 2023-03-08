#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: int
 *
 * Return: int n is lower than 0, returns -1
 * factorial of n.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	if (n == 1)
		return (n);
	return (n * factorial(n - 1));
}
