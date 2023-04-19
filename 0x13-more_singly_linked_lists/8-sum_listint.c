#include "lists.h"

/**
 * sum_listint - returns the sum of all the data
 * (n) of a listint_t linked list.
 * @head: pointer to head.
 *
 * Return: the sum of all the data (n)
 * Otherwise 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *next_node = head;
	int sum = 0;

	while (next_node != NULL)
	{
		sum += next_node->n;
		next_node = next_node->next;
	}

	return (sum);
}
