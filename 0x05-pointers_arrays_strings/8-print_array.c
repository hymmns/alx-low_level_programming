#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: array
 * @n: number of elements to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int index = 0;

	for (; index < n; index++)
	{
		printf("%d", *(a + index));
		
		if(index != (n - 1))
			printf(", ");
	}
	printf("\n");
}
		
