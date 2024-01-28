#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	int digit_one, digit_two;

	for (digit_one = 0; digit_one < 10; digit_one++)
	{
		for (digit_two = digit_one + 1; digit_two < 10; digit_two++)
		{
			putchar(digit_one + '0');
			putchar(digit_two + '0');

			if (digit_one < 8 || digit_two < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
