#include "variadic_functions.h"

/**
 * sum_them_all -  sum of all its parameters.
 * @n: number
 *
 * Return: sum total value.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int index = 0;
	va_list list;

	va_start(list, n);
	if (n)
		while (index < n)
		{
			sum += va_arg(list, int);
			index++;
		}

	va_end(list);
	return (sum);
}
