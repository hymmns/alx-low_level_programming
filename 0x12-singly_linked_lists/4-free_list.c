#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: list_t pointer - head.
 *
 * Return: void.
 */
void free_list(list_t *head)
{
	list_t *next = head;

	if (next == NULL)
		return;

	while (head)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}
}
