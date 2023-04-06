#include <stddef.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: const listint_t - node.
 *
 * Return: size_t - returns the number of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t num_of_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		num_of_nodes++;
	}

	return (num_of_nodes);
}
