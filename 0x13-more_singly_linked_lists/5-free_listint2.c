#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list.
 *
 * @head: pointer to pointer of head.
 *
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *next_node;

	if (head != NULL)
	{
		while (*head)
		{
			next_node = (*head)->next;
			free(*head);
			*head = next_node;
		}
		*head = NULL;
	}
}
