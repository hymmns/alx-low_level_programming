#include "main.h"

/**
 * prime - helper function
 * returns 1 if the input integer is a prime number
 * otherwise return 0.
 * @strt: int number to check.
 * @stp: int number starting point.
 *
 * Return: int 1 if n is a prime number
 * 0 if otherwise.
 */
int prime(int strt, int stp)
{
	--stp;

	if (stp < 2)
		return (1);

	if (strt % stp == 0)
		return (0);

	return (prime(strt, stp));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * otherwise return 0.
 * @n: int number.
 *
 * Return: int 1 if n is a prime number
 * 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (prime(n, n));
}
