#include <stdio.h>
#include <stddef.h>
#include <stdbool.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: head
 *
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num_of_nodes = 0;

	while (true)
	{
		if (h == NULL)
			break;

		else
		{
			printf("%d\n", h->n);
			h = h->next;
			num_of_nodes++;
		}
	}

	return (num_of_nodes);
}
