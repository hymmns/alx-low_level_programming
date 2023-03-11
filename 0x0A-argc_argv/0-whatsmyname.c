#include <stdio.h>

/**
 * whatsmyname - prints the program name.
 * @s: string pointer.
 *
 * Return: void.
 */
void whatsmyname(char *s)
{
	printf("%s\n", s);
}

/**
 * main - starting point.
 * @argc: int numbers of argument passed.
 * @argv: pointer to arrays of passed arguments.
 *
 * Return: Always 0 (success)
 */
int main(int argc __attribute__ ((unused)), char *argv[])
{
	whatsmyname(argv[0]);
	return (0);
}
