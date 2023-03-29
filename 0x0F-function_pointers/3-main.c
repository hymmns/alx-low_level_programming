#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: int - argument count.
 * @argv: int - argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int (*funct)(int, int), a, b;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];
	funct = get_op_func(op);
	if (funct == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*(op) == '%' || *(op) == '/') && (b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", funct(a, b));
	return (0);
}
