#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: char pointer - separator.
 * @n: unsigned int - number of integers passed.
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index = 0;
	va_list ap;

	va_start(ap, n);
	while (index < n)
	{
		printf("%d%s", va_arg(ap, int),
		index < n - 1 && separator != NULL ? separator : "");
		index++;
	}
	printf("\n");
}
