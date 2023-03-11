#include <stdio.h>
#include <stdlib.h>

/**
 * main - starting point
 * prints the minimum number of coins to make change for an amount of money.
 * @argc: int number of arguments.
 * @argv: pointer to array of passed arguments
 *
 * Return: 1 if the number of arguments passed to your program is not exactly
 * 0 if the number passed as the argument is negative.
 */
int main(int argc, char *argv[])
{
	int coins = 0, coinsv[5] = {25, 10, 5, 2, 1}, i, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents > 0)
	{
		for (i = 0; i < 5; i++)
		{
			coins += cents / coinsv[i];
			cents -= (cents / coinsv[i]) * coinsv[i];
		}
	}
	printf("%d\n", coins);
	return (0);
}
