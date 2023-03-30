#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: const char pointer - separator.
 * @n: unsigned int - number of strings passed.
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int ind = 0;
	char *ptr;
	va_list ap;

	va_start(ap, n);
	while (ind < n)
	{
		ptr = va_arg(ap, char *);
		printf("%s%s", ptr == NULL ? "(nil)" : ptr,
		ind < n - 1 && separator != NULL ? separator : "");
		ind++;
	}
	printf("\n");
}
