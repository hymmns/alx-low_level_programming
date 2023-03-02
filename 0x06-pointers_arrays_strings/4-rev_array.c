#include "main.h"

/**
 * reverse_array -  reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int len, index, temp;

	index = 0;
	len = n - 1;

	while (index <= len)
	{
		temp = a[index];
		a[index] = a[len];
		a[len] = temp;
		index++;
		len--;
	}
}
