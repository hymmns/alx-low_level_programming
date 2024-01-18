#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: int
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n <= 98)
		while (n < 99)
		{
			printf("%d", n);

			if (n <= 97)
				printf(", ");
			n++;
		}
	else
		while (n > 97)
		{
			printf("%d", n);

			if (n > 98)
				printf(", ");
			n--;
		}

	printf("\n");
}
