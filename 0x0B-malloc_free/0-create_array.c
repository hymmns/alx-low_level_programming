#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: unsigned int - size of the array.
 * @c: char - character
 *
 * Return: char pointer to the array,
 *  or NULL if it fails or if size = 0.
 */
char *create_array(unsigned int size, char c)
{
	char *arr = (char *) malloc(sizeof(c) * size);
	unsigned int i = 0;

	if (arr == NULL || size == 0)
		return (NULL);

	while (i < size)
	{
		arr[i++] = c;
	}

	return (arr);
}
