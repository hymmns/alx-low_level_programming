#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: pointer - head
 *
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *nxt_node;

	while (head != NULL)
	{
		nxt_node = head->next;
		free(head);
		head = nxt_node;
	}
}
