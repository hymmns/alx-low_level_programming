#include <stdio.h>
#include <stdlib.h>

/**
 * main - starting point
 * multiplies two numbers.
 * @argc: int number of arguments.
 * @argv: pointer to array of passed arguments
 *
 * Return: 0
 * If the program does not receive two arguments
 * returns 1
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
