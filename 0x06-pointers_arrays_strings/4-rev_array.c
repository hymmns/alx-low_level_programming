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
        int len = 0, index = 0, temp;

        while (len < n)
                len++;

        len = len - 1;

        while (index < len / 2)
        {
                temp = *(a + (len - index));
                *(a + (len - index)) = *(a + index);
                *(a + index) = temp;
                index++;
        }
}
