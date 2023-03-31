#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: const list_t pointer to link list.
 *
 * Return: size_t of list.
 */
size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		h = h->next;
		size++;
	}
	return (size);
}
