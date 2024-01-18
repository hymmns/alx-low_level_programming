#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 on success
 */
int main(void)
{
	for (int digit_one = 0; digit_one < 10; digit_one++)
	{
		for (int digit_two = digit_one + 1; digit_two < 10; digit_two++)
		{
			for (int digit_three = digit_two + 1; digit_three < 10; digit_three++)
			{
				putchar(digit_one + '0');
				putchar(digit_two + '0');
				putchar(digit_three + '0');

				if (digit_one < 8 || digit_two < 9 || digit_three < 10)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
