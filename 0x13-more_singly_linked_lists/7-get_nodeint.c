#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to head.
 * @index: unsigned int - index.
 *
 * Return: returns the nth node of a listint_t
 * Otherwise NULL if node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nxt = head;
	unsigned int i = 0;

	while (nxt != NULL)
	{
		if (i == index)
			return (nxt);
		nxt = nxt->next;
		++i;
	}
	return (NULL);
}
