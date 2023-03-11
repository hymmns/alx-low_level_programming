#include <stdio.h>
#include <stdlib.h>

/**
 * main - starting point
 * prints result of adding two numbers.
 * @argc: int number of arguments.
 * @argv: pointer to array of passed arguments
 *
 * Return: 0 if no number is passed
 * 1 if number(s) contains symbols that are not digits
 */
int main(int argc, char *argv[])
{
	int i = 1, sum = 0, j;

	while (i < argc)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (0);
			}
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
