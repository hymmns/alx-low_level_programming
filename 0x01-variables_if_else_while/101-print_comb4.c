#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 on success
 */
int main(void)
{
	int digit_one, digit_two, digit_three;

	for (digit_one = 0; digit_one < 10; digit_one++)
	{
		for (digit_two = digit_one + 1; digit_two < 10; digit_two++)
		{
			for (digit_three = digit_two + 1; digit_three < 10; digit_three++)
			{
				putchar(digit_one + '0');
				putchar(digit_two + '0');
				putchar(digit_three + '0');

				if (digit_one < 7 && (digit_two < 9 || digit_three < 10))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
