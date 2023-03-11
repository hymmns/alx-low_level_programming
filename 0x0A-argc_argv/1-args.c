#include <stdio.h>

/**
 * main - starting point
 * prints the number of arguments passed.
 * @argc: int numbers of argument.
 * @argv: pointer to array of passed arguments.
 *
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[] __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
