#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: Pointer to head pointer
 * @n: int
 *
 * Return: dlistint_t
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *curr = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{


		while (curr->next != NULL)
			curr = curr->next;

		new_node->prev = curr;
		curr->next = new_node;
	}

	return (new_node);
}
