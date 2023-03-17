#include <stdlib.h>

/**
 * array_range - create an array of integers.
 * @min: int - minimum value
 * @max: int - maximum value
 *
 * Return: intvpointer to allocated memory otherwise NULL.
 */
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * ((max - min) + 1));

	if (arr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		arr[i] = min;
	return (arr);
}
