#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to head pointer
 * @idx: int index position
 * @n: int data
 *
 * Return: dlistint_t; the address of the new node,
 * or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	int count = 0;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	while (*h != NULL)
	{
		if (count == idx)
		{
			if (idx == 0)
			{
				new_node->next = *h;
				new_node->prev = NULL;
				(*h)->prev = new_node;
				*h = new_node;
			}
			else
			{

				new_node->next = *h;
				new_node->prev = (*h)->prev;
				(*h)->prev = new_node;
				break;
			}
		}
		*h = (*h)->next;
		count++;
	}

	return (new_node);
}
