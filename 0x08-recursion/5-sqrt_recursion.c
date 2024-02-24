#include "main.h"

/**
 * helper - helper function
 * @n: int
 * @limit: int
 * @guess: int
 *
 * Return: int
 */
int helper(int n, int limit, int guess)
{
	if (guess * guess == n)
		return (guess);

	if (guess > limit)
		return (-1);

	return (helper(n, n / 2, guess + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: int
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (helper(n, n / 2, 1));
}
