#include "main.h"
#include <stdio.h>

/**
 * helper - helper function
 * @n: int - number
 * @product: int
 *
 * Return: int
 */
int helper(int n, int product)
{
	if (n % product == 0 && product != n)
		return (0);

	if (product == n)
		return (1);

	return (helper(n, product + 1));
}

/**
 * is_prime_number - checks if the input integer is a prime number
 * @n: int - input integer
 *
 * Return: 1 if the input integer is a prime number, otherwise 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (helper(n, 2));
}
