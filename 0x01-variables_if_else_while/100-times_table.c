#include <stdio.h>

/**
 * print_times_table - prints the n times table, starting with
 * 0
 * @n: int
 *
 * Return: void
 */
void print_times_table(int n)
{

	if (n > 15 || n < 0)
		return;

	int multiplier, multiplicand;

	for (multiplier = 0; multiplier < (n + 1); multiplier++)
	{
		for (multiplicand = 0; multiplicand < (n + 1); multiplicand++)
		{
			int result = multiplier * multiplicand;

			printf("%d", result);

			if (multiplicand < n)
			{
				printf(",");

				if (result > 99)
					printf(" ");

				else if (result > 9)
					printf("  ");
				else
					printf("   ");
			}
		}
		printf("\n");
	}
	printf("\n");
}
