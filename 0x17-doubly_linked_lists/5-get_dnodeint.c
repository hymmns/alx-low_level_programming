#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer
 * @index: int
 *
 * Return: dlistint_t
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *target_node = NULL;
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
		{
			target_node = head;
			break;
		}

		head = head->next;
		count++;
	}

	return (target_node);
}
