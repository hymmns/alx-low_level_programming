#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: pointer to pointer of head.
 *
 * Return: the head node’s data (n)
 * Otherwise if the linked list is empty return 0.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *next;

	if (head != NULL && (*head) != NULL)
	{
		n = (*head)->n;
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	return (n);
}
