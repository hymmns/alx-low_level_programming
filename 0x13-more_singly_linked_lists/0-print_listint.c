#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: listint_t pointer
 *
 * Return: size_t - returns the number of elements.
 */

size_t print_listint(const listint_t *h)
{
	size_t num_of_nodes = 0;
	const listint_t current_node = h;

	while (current_node != NULL)
	{
		printf("%d\n", h->n);
		current_node = h->next;
		num_of_nodes++;
	}

	return (num_of_nodes);
}
