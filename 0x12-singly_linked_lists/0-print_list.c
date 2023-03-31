#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: const list_t pointer to link list
 *
 * Return: size_t of list
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		size++;
		h = h->next;
	}
	return (size);
}
