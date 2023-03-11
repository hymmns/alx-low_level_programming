#include <stdio.h>

/**
 * main - starting point
 * prints all arguments it receives.
 * @argc: int number of arguments.
 * @argv: pointer to array of arguments passed.
 *
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
