#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		dlistint_t *temp = head;

		head = head->next;
		free(temp);
	}
}
