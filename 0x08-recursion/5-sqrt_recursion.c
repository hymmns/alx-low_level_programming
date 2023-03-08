#include "main.h"

/**
 * helper - helper function
 * returns the natural square root of a number
 * returns -1 if the number is not natural square root.
 * @n: int number
 * @start: int starting point.
 * @end: int ending point (limit).
 *
 * Return: int natural square root of a number
 * -1 if otherwise
 */
int helper(int n, int start, int end)
{
	if (start > end)
		return (-1);
	if (start * start == n)
		return (start);
	helper(n, ++start, end);
}
/**
 * helper - helper function
 * returns the natural square root of a number
 * returns -1 if the number is not natural square root.
 * @n: int number
 *
 * Return: int natural square root of a number
 * -1 if otherwise
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	return (helper(n, 1, n / 2));
}
